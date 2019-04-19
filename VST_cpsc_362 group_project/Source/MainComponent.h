/*
  ==============================================================================
	This file was auto-generated!
  ==============================================================================
*/

#pragma once

/*
  ==============================================================================
	This file was auto-generated!
  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h" //////this is where juce includes all of its headersfor its modules. the descriptions are in online documentation to use you can initialize down below in private part of main component class like how i did for this one (dsp::Oscillator<float> wave2;) test it out explore other classes for anything useful.
#include "waveForms.h"
#include <set>

//==============================================================================
/*
	This component lives inside our window, and this is where you should put all
	your controls and content.
*/

class Visualiser : public AudioVisualiserComponent
{
public:
	Visualiser() : AudioVisualiserComponent(1)
	{
		setBufferSize(512);
		setSamplesPerBlock(256);
		setColours(Colours::black, Colours::indianred);
	}
};

class MainComponent : public AudioAppComponent, public Slider::Listener, public Button::Listener, private MidiInputCallback,
	private MidiKeyboardStateListener
{
public:
	//==============================================================================
	MainComponent();
	~MainComponent();

	//==============================================================================
	void prepareToPlay(int samplesPerBlockExpected, double sampleRate) override;
	void getNextAudioBlock(const AudioSourceChannelInfo& bufferToFill) override;
	void releaseResources() override;

	void sliderValueChanged(Slider * slider)  override {
		if (slider == &cutoffFrequencySlider) {
			double frequency = slider->getValue();
			lp1.setCutoffFrequencyHz(frequency);
		}
		else if (slider == &masterVolumeSlider) {
			//add behavior
		}
		else if (slider == &resonanceSlider) {
			double res = slider->getValue();

			lp1.setResonance(res);
		}
		else if (slider == &driveSlider) {
			double drv = slider->getValue();

			lp1.setDrive(drv);
		}
		else if (slider == &lfoFrequencySlider) {

		}
		else if (slider == &delayMixSlider) {

		}
		else if (slider == &delayFeedbackSlider) {

		}
		else if (slider == &delayTimeSlider) {

		}
		else if (slider == &reverbMixSlider) {

		}
		else if (slider == &reverbLevelSlider) {

		}
		else if (slider == &reverbDampingSlider) {

		}
	}
	void buttonClicked(Button * button) override {
		if (button == &passFilterButton) {
			if (!passFilterState)
			{
				passFilterButton.setButtonText("high pass");
				passFilterState = true;
			}
			else
			{
				passFilterButton.setButtonText("low pass");
				passFilterState = false;
			}
		}
		else if (button == &lfoFilterButton) {
			if (!lfoFilterState) {
				lfoFilterButton.setButtonText("on");
				lfoFilterState = true;
			}
			else
			{
				lfoFilterButton.setButtonText("off");
				lfoFilterState = false;
			}
		}
		else if (button == &oscillator1) {
			switch (osc1WaveType) {
			case 1:
				oscillator1.setButtonText("square");
				osc1WaveType = 2;
				break;
			case 2:
				oscillator1.setButtonText("sawtooth");
				osc1WaveType = 3;
				break;
			case 3:
				oscillator1.setButtonText("sine");
				osc1WaveType = 1;
				break;
			}
		}
		else if (button == &oscillator2) {
			switch (osc2WaveType) {
			case 1:
				oscillator2.setButtonText("square");
				osc2WaveType = 2;
				break;
			case 2:
				oscillator2.setButtonText("sawtooth");
				osc2WaveType = 3;
				break;
			case 3:
				oscillator2.setButtonText("sine");
				osc2WaveType = 1;
				break;
			}
		}
		else if (button == &oscillator3) {
			switch (osc3WaveType) {
			case 1:
				oscillator3.setButtonText("square");
				osc3WaveType = 2;
				break;
			case 2:
				oscillator3.setButtonText("sawtooth");
				osc3WaveType = 3;
				break;
			case 3:
				oscillator3.setButtonText("sine");
				osc3WaveType = 1;
				break;
			}
		}
		else if (button == &delayButton) {
			if (!delayOn) {
				delayButton.setButtonText("on");
				delayOn = true;
				//add code here?
			}
			else {
				delayButton.setButtonText("off");
				delayOn = false;
				//add code here?
			}
		}
		else if (button == &reverbButton) {
			if (!reverbOn) {
				reverbButton.setButtonText("on");
				reverbOn = true;
				//add code here?
			}
			else {
				reverbButton.setButtonText("off");
				reverbOn = false;
				//add code here?
			}
		}
	}

	void setMidiInput(int index);
	void handleIncomingMidiMessage(MidiInput* source, const MidiMessage& message) override;

	void handleNoteOn(MidiKeyboardState*, int midiChannel, int midiNoteNumber, float velocity) override;


	void handleNoteOff(MidiKeyboardState*, int midiChannel, int midiNoteNumber, float /*velocity*/) override;



	class IncomingMessageCallback : public CallbackMessage
	{
	public:
		IncomingMessageCallback(MainComponent* o, const MidiMessage& m, const String& s)
			: owner(o), message(m), source(s)
		{}

		void messageCallback() override
		{
			if (owner != nullptr)
				owner->addMessageToList(message, source);
		}

		AudioAppComponent::SafePointer<MainComponent> owner;
		MidiMessage message;
		String source;
	};
	void postMessageToList(const MidiMessage& message, const String& source)
	{
		(new IncomingMessageCallback(this, message, source))->post();
	}

	void addMessageToList(const MidiMessage& message, const String& source)
	{
		auto time = message.getTimeStamp() - startTime;

		auto hours = ((int)(time / 3600.0)) % 24;
		auto minutes = ((int)(time / 60.0)) % 60;
		auto seconds = ((int)time) % 60;
		auto millis = ((int)(time * 1000.0)) % 1000;

		auto timecode = String::formatted("%02d:%02d:%02d.%03d",
			hours,
			minutes,
			seconds,
			millis);

		auto description = getMidiMessageDescription(message);

		String midiMessageString(timecode + "  -  " + description + " (" + source + ")"); // [7]
		logMessage(midiMessageString);
	}
	//==============================================================================
	void paint(Graphics& g) override;
	void resized() override;

private:

	static String getMidiMessageDescription(const MidiMessage& m)
	{
		if (m.isNoteOn())           return "Note on " + MidiMessage::getMidiNoteName(m.getNoteNumber(), true, true, 3);
		if (m.isNoteOff())          return "Note off " + MidiMessage::getMidiNoteName(m.getNoteNumber(), true, true, 3);
		if (m.isProgramChange())    return "Program change " + String(m.getProgramChangeNumber());
		if (m.isPitchWheel())       return "Pitch wheel " + String(m.getPitchWheelValue());
		if (m.isAftertouch())       return "After touch " + MidiMessage::getMidiNoteName(m.getNoteNumber(), true, true, 3) + ": " + String(m.getAfterTouchValue());
		if (m.isChannelPressure())  return "Channel pressure " + String(m.getChannelPressureValue());
		if (m.isAllNotesOff())      return "All notes off";
		if (m.isAllSoundOff())      return "All sound off";
		if (m.isMetaEvent())        return "Meta event";

		if (m.isController())
		{
			String name(MidiMessage::getControllerName(m.getControllerNumber()));

			if (name.isEmpty())
				name = "[" + String(m.getControllerNumber()) + "]";

			return "Controller " + name + ": " + String(m.getControllerValue());
		}

		return String::toHexString(m.getRawData(), m.getRawDataSize());
	}

	void logMessage(const String& m)
	{
		midiMessagesBox.moveCaretToEnd();
		midiMessagesBox.insertTextAtCaret(m + newLine);
	}


	dsp::Oscillator<float> wave;
	dsp::Oscillator<float> wave2; //created this instance to get the ball rolling on calling juce classes from documentation
	dsp::Oscillator<float> wave3;
	dsp::LadderFilter<float> lp1;
	dsp::Reverb rv6;
	dsp::Gain<float> lvl;
	std::vector<MidiMessage> notes;

	//midi classes


	AudioDeviceManager deviceManager;           // [1]
	ComboBox midiInputList;                     // [2]
	Label midiInputListLabel;
	int lastInputIndex = 0;                     // [3]
	bool isAddingFromMidiInput = false;         // [4]

	MidiKeyboardState keyboardState;            // [5]
	MidiKeyboardComponent keyboardComponent;    // [6]


	TextEditor midiMessagesBox;
	double startTime;
	bool noteOn = false;
	Visualiser visualiser;

	//bool loading; flag variable we can use to determine whether we're starting with new audio settings or loading from saved presets

    std::set<int> currentNotes;

	//i had to manually add this dsp module from the modules section to the left on the projucer here is documentation https://docs.juce.com/master/juce__Oscillator_8h.html

	//==============================================================================
	// Your private member variables go here...


	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MainComponent)

//***********************Filter Sliders and Labels***********************************************//
	//**************************Filter UI********************************************************//
	Slider resonanceSlider;
	Label resonanceLabel;
	
	Slider cutoffFrequencySlider;
	Label cutfrequencyLabel;
	
	Slider driveSlider;
	Label driveLabel;
	
	TextButton passFilterButton;
	Label passFilterLabel;
	bool passFilterState = false; // false = low pass, true = high pass
	
	TextButton lfoFilterButton;
	Label lfoFilterLabel;
	bool lfoFilterState = false; // false = off, true = on

	Slider lfoFrequencySlider;
	Label lfoFrequencyLabel;


	//******************************************************************************************//
	//**************************Oscillator UI***************************************************//
	Slider masterVolumeSlider;
	Label masterVolumeLabel;
	
	TextButton oscillator1;
	Label osc1Label;

	int osc1WaveType = 1;		/*
									Wave types: 
									1 = Sine
									2 = Square
									3 = Saw 
								*/
	TextButton oscillator2;         
	Label osc2Label;            


	int osc2WaveType = 1;

	TextButton oscillator3;
	Label osc3Label;


	int osc3WaveType = 1;

	//******************************************************************************************//
	//**************************Delay UI********************************************************//
	TextButton delayButton;
	Label delayLabel;
	bool delayOn = false; // false = delay off, true = delay on

	Slider delayMixSlider;
	Label delayMixLabel;

	Slider delayFeedbackSlider;
	Label delayFeedbackLabel;

	Slider delayTimeSlider;
	Label delayTimeLabel;
	
	//******************************************************************************************//
	//**************************Reverb UI*******************************************************//

	TextButton reverbButton;
	Label reverbLabel;
	bool reverbOn = false; // false = reverb off, true = reverb on

	Slider reverbMixSlider;
	Label reverbMixLabel;

	Slider reverbLevelSlider;
	Label reverbLevelLabel;

	Slider reverbDampingSlider;
	Label reverbDampingLabel;

	//******************************************************************************************//

	//=====================================================================================
};
