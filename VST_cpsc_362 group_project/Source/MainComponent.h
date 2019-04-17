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

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/

class Visualiser : public AudioVisualiserComponent
{
public:
	Visualiser() : AudioVisualiserComponent(2)
	{
		setBufferSize(512);
		setSamplesPerBlock(256);
		setColours(Colours::black, Colours::indianred);
	}
};

class MainComponent   : public AudioAppComponent, public Slider::Listener, public Button::Listener, private MidiInputCallback,
private MidiKeyboardStateListener
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent();

    //==============================================================================
    void prepareToPlay (int samplesPerBlockExpected, double sampleRate) override;
    void getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill) override;
    void releaseResources() override;
	
	void sliderValueChanged(Slider * slider)  override{
		if (slider == &cutoffFrequencySlider) {
			double frequency = slider->getValue();
			lp1.setCutoffFrequencyHz(frequency);
		}
		else if (slider == &resonanceSlider) {
			double res = slider->getValue();

			lp1.setResonance(res);
		}
		else if (slider == &driveSlider) {
			double drv = slider->getValue();

			lp1.setDrive(drv);
		}
		else if (slider == &osc1VolumeSlider) {

		}
		else if (slider == &osc1TuneSlider) {

		}
		else if (slider == &osc2VolumeSlider) {

		}
		else if (slider == &osc2TuneSlider) {

		}
		else if (slider == &osc3VolumeSlider) {

		}
		else if (slider == &osc3TuneSlider) {

		}
		else if (slider == &delayMixSlider) {

		}
		else if (slider == &delayFeedbackSlider) {

		}
		else if (slider == &reverbMixSlider) {

		}
		else if (slider == &reverbLevelSlider) {

		}
	}
	void buttonClicked(Button * button) override {
		if (button == &filterTypeButton) {
			if (!filterType)
			{
				filterTypeButton.setButtonText("high pass");
				filterType = true;
				//add code here to actually change the filter being used
			}
			else 
			{
				filterTypeButton.setButtonText("low pass");
				filterType = false;
				//add code here to actually change the filter being used
			}
		}
		else if (button == &oscillator1) {
			switch (osc1WaveType) {
				case 0: 
					oscillator1.setButtonText("sine");
					osc1WaveType = 1;
					//add more behavior to each???
					break;
				case 1:
					oscillator1.setButtonText("square");
					osc1WaveType = 2;
					break;
				case 2:
					oscillator1.setButtonText("triangle");
					osc1WaveType = 3;
					break;
				case 3:
					oscillator1.setButtonText("sawtooth");
					osc1WaveType = 4;
					break;
				case 4:
					oscillator1.setButtonText("off");
					osc1WaveType = 0;
					break;
			}
		}
		else if (button == &oscillator2) {
			switch (osc2WaveType) {
			case 0:
				oscillator2.setButtonText("sine");
				osc2WaveType = 1;
				//add more behavior to each???
				break;
			case 1:
				oscillator2.setButtonText("square");
				osc2WaveType = 2;
				break;
			case 2:
				oscillator2.setButtonText("triangle");
				osc2WaveType = 3;
				break;
			case 3:
				oscillator2.setButtonText("sawtooth");
				osc2WaveType = 4;
				break;
			case 4:
				oscillator2.setButtonText("off");
				osc2WaveType = 0;
				break;
			}
		}
		else if (button == &oscillator3) {
			switch (osc3WaveType) {
			case 0:
				oscillator3.setButtonText("sine");
				osc3WaveType = 1;
				//add more behavior to each???
				break;
			case 1:
				oscillator3.setButtonText("square");
				osc3WaveType = 2;
				break;
			case 2:
				oscillator3.setButtonText("triangle");
				osc3WaveType = 3;
				break;
			case 3:
				oscillator3.setButtonText("sawtooth");
				osc3WaveType = 4;
				break;
			case 4:
				oscillator3.setButtonText("off");
				osc3WaveType = 0;
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
	
    void setMidiInput (int index);
    void handleIncomingMidiMessage (MidiInput* source, const MidiMessage& message) override;
    
    void handleNoteOn (MidiKeyboardState*, int midiChannel, int midiNoteNumber, float velocity) override;
   
    
    void handleNoteOff (MidiKeyboardState*, int midiChannel, int midiNoteNumber, float /*velocity*/) override;
    
    
    
    class IncomingMessageCallback   : public CallbackMessage
    {
    public:
        IncomingMessageCallback (MainComponent* o, const MidiMessage& m, const String& s)
        : owner (o), message (m), source (s)
        {}
        
        void messageCallback() override
        {
            if (owner != nullptr)
                owner->addMessageToList (message, source);
        }
        
        AudioAppComponent::SafePointer<MainComponent> owner;
        MidiMessage message;
        String source;
    };
    void postMessageToList (const MidiMessage& message, const String& source)
    {
        (new IncomingMessageCallback (this, message, source))->post();
    }
    
    void addMessageToList (const MidiMessage& message, const String& source)
    {
        auto time = message.getTimeStamp() - startTime;
        
        auto hours   = ((int) (time / 3600.0)) % 24;
        auto minutes = ((int) (time / 60.0)) % 60;
        auto seconds = ((int) time) % 60;
        auto millis  = ((int) (time * 1000.0)) % 1000;
        
        auto timecode = String::formatted ("%02d:%02d:%02d.%03d",
                                           hours,
                                           minutes,
                                           seconds,
                                           millis);
        
        auto description = getMidiMessageDescription (message);
        
        String midiMessageString (timecode + "  -  " + description + " (" + source + ")"); // [7]
        logMessage (midiMessageString);
    }
    //==============================================================================
    void paint (Graphics& g) override;
    void resized() override;
    
private:
    
    static String getMidiMessageDescription (const MidiMessage& m)
    {
        if (m.isNoteOn())           return "Note on "          + MidiMessage::getMidiNoteName (m.getNoteNumber(), true, true, 3);
        if (m.isNoteOff())          return "Note off "         + MidiMessage::getMidiNoteName (m.getNoteNumber(), true, true, 3);
        if (m.isProgramChange())    return "Program change "   + String (m.getProgramChangeNumber());
        if (m.isPitchWheel())       return "Pitch wheel "      + String (m.getPitchWheelValue());
        if (m.isAftertouch())       return "After touch "      + MidiMessage::getMidiNoteName (m.getNoteNumber(), true, true, 3) +  ": " + String (m.getAfterTouchValue());
        if (m.isChannelPressure())  return "Channel pressure " + String (m.getChannelPressureValue());
        if (m.isAllNotesOff())      return "All notes off";
        if (m.isAllSoundOff())      return "All sound off";
        if (m.isMetaEvent())        return "Meta event";
        
        if (m.isController())
        {
            String name (MidiMessage::getControllerName (m.getControllerNumber()));
            
            if (name.isEmpty())
                name = "[" + String (m.getControllerNumber()) + "]";
            
            return "Controller " + name + ": " + String (m.getControllerValue());
        }
        
        return String::toHexString (m.getRawData(), m.getRawDataSize());
    }

    void logMessage (const String& m)
    {
        midiMessagesBox.moveCaretToEnd();
        midiMessagesBox.insertTextAtCaret (m + newLine);
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

	Visualiser visualiser;
    
    TextEditor midiMessagesBox;
    double startTime;


    

    
	
    //i had to manually add this dsp module from the modules section to the left on the projucer here is documentation https://docs.juce.com/master/juce__Oscillator_8h.html
    
    //==============================================================================
    // Your private member variables go here...

	
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
		//=======================members used for gui implementation===========================
	bool loading;//flag variable we can use to determine whether we're starting with new audio settings or loading from saved presets
	
	
	//Filter Sliders and Labels
	//**************************Filter UI********************************************************//
	Slider resonanceSlider;
	Label resonanceLabel;
	Slider cutoffFrequencySlider;
	Label cutfrequencyLabel;
	Slider driveSlider;
	Label driveLabel;
	TextButton filterTypeButton;
	Label filterLabel;

	bool filterType = false; // false = low pass, true = high pass
	bool noteOn = false;
	//******************************************************************************************//
	//**************************Oscillator UI***************************************************//
    TextButton oscillator1;
    Label osc1Label;
    Slider osc1VolumeSlider;
    Label osc1VolumeLabel;
    Slider osc1TuneSlider;
    Label osc1TuneLabel;
    
    int osc1WaveType = 0;           // Wave types: 0 = off
    
    TextButton oscillator2;         //             1 = Sine
    Label osc2Label;               //              2 = Square
    Slider osc2VolumeSlider;       //              3 = Triangle
    Label osc2VolumeLabel;         //              4 = Saw
    Slider osc2TuneSlider;
    Label osc2TuneLabel;
    
    int osc2WaveType = 0;
    
    TextButton oscillator3;
    Label osc3Label;
    Slider osc3VolumeSlider;
    Label osc3VolumeLabel;
    Slider osc3TuneSlider;
    Label osc3TuneLabel;
    
    int osc3WaveType = 0;

	//******************************************************************************************//
	//**************************Delay UI********************************************************//
	TextButton delayButton;
	Label delayLabel;
	Slider delayMixSlider;
	Label delayMixLabel;
	Slider delayFeedbackSlider;
	Label delayFeedbackLabel;

	bool delayOn = false; // false = delay off, true = delay on
	//******************************************************************************************//
	//**************************Reverb UI*******************************************************//

	TextButton reverbButton;
	Label reverbLabel;
	Slider reverbMixSlider;
	Label reverbMixLabel;
	Slider reverbLevelSlider;
	Label reverbLevelLabel;

	bool reverbOn = false; // false = reverb off, true = reverb on
	//******************************************************************************************//

	//=====================================================================================
};
