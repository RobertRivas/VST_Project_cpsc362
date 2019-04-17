/*
    This file was auto-generated!
  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================

MainComponent::MainComponent() : keyboardComponent (keyboardState, MidiKeyboardComponent::horizontalKeyboard),
startTime (Time::getMillisecondCounterHiRes() * 0.001)
{
    setOpaque (true);
    
    addAndMakeVisible (midiInputListLabel);
    midiInputListLabel.setText ("MIDI Input:", dontSendNotification);
    midiInputListLabel.attachToComponent (&midiInputList, true);
    
    
    addAndMakeVisible (midiInputList);
    midiInputList.setTextWhenNoChoicesAvailable ("No MIDI Inputs Enabled");
    auto midiInputs = MidiInput::getDevices();
    midiInputList.addItemList (midiInputs, 1);
    
     // find the first enabled device and use that by default
     for (auto midiInput : midiInputs)
     {
     if (deviceManager.isMidiInputEnabled (midiInput))
     {
     setMidiInput (midiInputs.indexOf (midiInput));
     break;
     }
     }
     
     // if no enabled devices were found just use the first one in the list
     if (midiInputList.getSelectedId() == 0)
     setMidiInput (0);
    addAndMakeVisible (keyboardComponent);
    keyboardState.addListener (this);
	
//**************************Filter UI*******************************************************************//
	resonanceSlider.setSliderStyle(Slider::SliderStyle::RotaryHorizontalDrag); //configure sliders' properties
	resonanceSlider.setTextBoxStyle(Slider::TextBoxBelow, false, 120, resonanceSlider.getTextBoxHeight());
	resonanceSlider.setRange(0, 1);
	resonanceSlider.setValue(0.5);
	resonanceLabel.setText("Resonance", dontSendNotification);
	resonanceLabel.attachToComponent(&resonanceSlider, false);
	resonanceSlider.addListener(this);				//use listener class to detect our changes to the slider values
	addAndMakeVisible(resonanceSlider);
	addAndMakeVisible(resonanceLabel);									//Make sliders & labels visible

	driveSlider.setSliderStyle(Slider::SliderStyle::RotaryHorizontalDrag);
	driveSlider.setTextBoxStyle(Slider::TextBoxBelow, false, 120, driveSlider.getTextBoxHeight());
	driveSlider.setRange(1, 100);
	driveSlider.setValue(50);
	driveLabel.setText("Drive", dontSendNotification);
	driveLabel.attachToComponent(&driveSlider, false);
	driveSlider.addListener(this);
	addAndMakeVisible(driveSlider);
	addAndMakeVisible(driveLabel);

	cutoffFrequencySlider.setSliderStyle(Slider::SliderStyle::LinearVertical);
	cutoffFrequencySlider.setTextBoxStyle(Slider::TextBoxBelow, false, 120, cutoffFrequencySlider.getTextBoxHeight());
	cutoffFrequencySlider.setRange(20, 12000);
	cutoffFrequencySlider.setValue(6000);
	cutoffFrequencySlider.setSkewFactorFromMidPoint(6000.0);
	cutoffFrequencySlider.setTextValueSuffix(" Hz");
	cutfrequencyLabel.setText("Cutoff Frequency", dontSendNotification);
	cutfrequencyLabel.attachToComponent(&cutoffFrequencySlider, false);
	cutoffFrequencySlider.addListener(this);
	addAndMakeVisible(cutfrequencyLabel);
	addAndMakeVisible(cutoffFrequencySlider);

	filterTypeButton.setButtonText("low pass"); //Default 
	filterTypeButton.setToggleState(false, NotificationType::dontSendNotification);
	filterLabel.setText("Filter Type", dontSendNotification);
	filterLabel.attachToComponent(&filterTypeButton, false);
	filterTypeButton.addListener(this);
	addAndMakeVisible(filterTypeButton);
	addAndMakeVisible(filterLabel);
//**********************************************************************************************************//

//**************************Oscillator UI*******************************************************************//
    oscillator1.setButtonText("off");
    oscillator1.setToggleState(false, NotificationType::dontSendNotification);
    oscillator1.addListener(this);
    osc1Label.setText("Oscillator 1", dontSendNotification);
    osc1Label.attachToComponent(&oscillator1, false);

    osc1VolumeSlider.setSliderStyle(Slider::SliderStyle::LinearVertical);
	osc1VolumeSlider.setTextBoxStyle(Slider::TextBoxBelow, false, 120, cutoffFrequencySlider.getTextBoxHeight());
	osc1VolumeSlider.setRange(0, 100);            //These values need to be changed
	osc1VolumeSlider.setValue(6000);                 //These values need to be changed
	osc1VolumeSlider.setTextValueSuffix("");      //These values need to be changed
	osc1VolumeSlider.addListener(this);
	osc1VolumeLabel.setText("Volume", dontSendNotification);
	osc1VolumeLabel.attachToComponent(&osc1VolumeSlider, false);
	

	osc1TuneSlider.setSliderStyle(Slider::SliderStyle::LinearVertical);
	osc1TuneSlider.setTextBoxStyle(Slider::TextBoxBelow, false, 120, cutoffFrequencySlider.getTextBoxHeight());
	osc1TuneSlider.setRange(20, 12000);              //These values need to be changed
	osc1TuneSlider.setValue(50);                   //These values need to be changed
	osc1TuneSlider.setTextValueSuffix(" Hz");        //These values need to be changed
	osc1TuneSlider.addListener(this);
	osc1TuneLabel.setText("Tune", dontSendNotification);
	osc1TuneLabel.attachToComponent(&osc1TuneSlider, false);
	

	addAndMakeVisible(oscillator1);
	addAndMakeVisible(osc1Label);
	addAndMakeVisible(osc1VolumeSlider);
	addAndMakeVisible(osc1VolumeLabel);
	addAndMakeVisible(osc1TuneSlider);
	addAndMakeVisible(osc1TuneLabel);

	/**********************************************************************/
	oscillator2.setButtonText("off");
	oscillator2.setToggleState(false, NotificationType::dontSendNotification);
	oscillator2.addListener(this);
	osc2Label.setText("Oscillator 2", dontSendNotification);
	osc2Label.attachToComponent(&oscillator2, false);

	osc2VolumeSlider.setSliderStyle(Slider::SliderStyle::LinearVertical);
	osc2VolumeSlider.setTextBoxStyle(Slider::TextBoxBelow, false, 120, cutoffFrequencySlider.getTextBoxHeight());
	osc2VolumeSlider.setRange(0, 100);            //These values need to be changed
	osc2VolumeSlider.setValue(50);                 //These values need to be changed
	osc2VolumeSlider.setTextValueSuffix(" Hz");      //These values need to be changed
	osc2VolumeSlider.addListener(this);
	osc2VolumeLabel.setText("Volume", dontSendNotification);
	osc2VolumeLabel.attachToComponent(&osc2VolumeSlider, false);


	osc2TuneSlider.setSliderStyle(Slider::SliderStyle::LinearVertical);
	osc2TuneSlider.setTextBoxStyle(Slider::TextBoxBelow, false, 120, cutoffFrequencySlider.getTextBoxHeight());
	osc2TuneSlider.setRange(20, 12000);              //These values need to be changed
	osc2TuneSlider.setValue(6000);                   //These values need to be changed
	osc2TuneSlider.setTextValueSuffix(" Hz");        //These values need to be changed
	osc2TuneSlider.addListener(this);
	osc2TuneLabel.setText("Tune", dontSendNotification);
	osc2TuneLabel.attachToComponent(&osc2TuneSlider, false);


	addAndMakeVisible(oscillator2);
	addAndMakeVisible(osc2Label);
	addAndMakeVisible(osc2VolumeSlider);
	addAndMakeVisible(osc2VolumeLabel);
	addAndMakeVisible(osc2TuneSlider);
	addAndMakeVisible(osc2TuneLabel);

	/**********************************************************************/

	oscillator3.setButtonText("off");
	oscillator3.setToggleState(false, NotificationType::dontSendNotification);
	oscillator3.addListener(this);
	osc3Label.setText("Oscillator 3", dontSendNotification);
	osc3Label.attachToComponent(&oscillator3, false);

	osc3VolumeSlider.setSliderStyle(Slider::SliderStyle::LinearVertical);
	osc3VolumeSlider.setTextBoxStyle(Slider::TextBoxBelow, false, 120, cutoffFrequencySlider.getTextBoxHeight());
	osc3VolumeSlider.setRange(0, 100);            //These values need to be changed
	osc3VolumeSlider.setValue(50);                 //These values need to be changed
	osc3VolumeSlider.setTextValueSuffix(" Hz");      //These values need to be changed
	osc3VolumeSlider.addListener(this);
	osc3VolumeLabel.setText("Volume", dontSendNotification);
	osc3VolumeLabel.attachToComponent(&osc3VolumeSlider, false);


	osc3TuneSlider.setSliderStyle(Slider::SliderStyle::LinearVertical);
	osc3TuneSlider.setTextBoxStyle(Slider::TextBoxBelow, false, 120, cutoffFrequencySlider.getTextBoxHeight());
	osc3TuneSlider.setRange(20, 12000);              //These values need to be changed
	osc3TuneSlider.setValue(6000);                   //These values need to be changed
	osc3TuneSlider.setTextValueSuffix(" Hz");        //These values need to be changed
	osc3TuneSlider.addListener(this);
	osc3TuneLabel.setText("Tune", dontSendNotification);
	osc3TuneLabel.attachToComponent(&osc3TuneSlider, false);


	addAndMakeVisible(oscillator3);
	addAndMakeVisible(osc3Label);
	addAndMakeVisible(osc3VolumeSlider);
	addAndMakeVisible(osc3VolumeLabel);
	addAndMakeVisible(osc3TuneSlider);
	addAndMakeVisible(osc3TuneLabel);

//**********************************************************************************************************//
//*******************************Delay UI*******************************************************************//
	delayButton.setButtonText("off"); // Do we want to start with no delay?
	delayButton.setToggleState(false, NotificationType::dontSendNotification);
	delayButton.addListener(this);
	delayLabel.setText("Delay", dontSendNotification);
	delayLabel.attachToComponent(&delayButton, false);

	delayMixSlider.setSliderStyle(Slider::SliderStyle::RotaryHorizontalDrag);
	delayMixSlider.setTextBoxStyle(Slider::TextBoxBelow, false, 120, cutoffFrequencySlider.getTextBoxHeight()); //Do we need a textbox here?
	delayMixSlider.setRange(0, 100);            //These values need to be changed
	delayMixSlider.setValue(50);                 //These values need to be changed
	delayMixSlider.setTextValueSuffix(" %");      //These values need to be changed
	delayMixSlider.addListener(this);
	delayMixLabel.setText("dry/wet", dontSendNotification);
	delayMixLabel.attachToComponent(&delayMixSlider, false);

	delayFeedbackSlider.setSliderStyle(Slider::SliderStyle::RotaryHorizontalDrag);
	delayFeedbackSlider.setTextBoxStyle(Slider::TextBoxBelow, false, 120, cutoffFrequencySlider.getTextBoxHeight());
	delayFeedbackSlider.setRange(20, 12000);              //These values need to be changed
	delayFeedbackSlider.setValue(6000);                   //These values need to be changed
	delayFeedbackSlider.setTextValueSuffix(" ");        //These values need to be changed
	delayFeedbackSlider.addListener(this);
	delayFeedbackLabel.setText("Feedback", dontSendNotification);
	delayFeedbackLabel.attachToComponent(&delayFeedbackSlider, false);

	addAndMakeVisible(delayButton);
	addAndMakeVisible(delayLabel);
	addAndMakeVisible(delayMixSlider);
	addAndMakeVisible(delayMixLabel);
	addAndMakeVisible(delayFeedbackSlider);
	addAndMakeVisible(delayFeedbackLabel);


//**********************************************************************************************************//
//******************************Reverb UI*******************************************************************//	
	reverbButton.setButtonText("off"); // Do we want to start with no reverb?
	reverbButton.setToggleState(false, NotificationType::dontSendNotification);
	reverbButton.addListener(this);
	reverbLabel.setText("Reverb", dontSendNotification);
	reverbLabel.attachToComponent(&reverbButton, false);

	reverbMixSlider.setSliderStyle(Slider::SliderStyle::RotaryHorizontalDrag);
	reverbMixSlider.setTextBoxStyle(Slider::TextBoxBelow, false, 120, cutoffFrequencySlider.getTextBoxHeight()); //Do we need a textbox here?
	reverbMixSlider.setRange(20, 12000);            //These values need to be changed
	reverbMixSlider.setValue(6000);                 //These values need to be changed
	reverbMixSlider.setTextValueSuffix(" %");      //These values need to be changed
	reverbMixSlider.addListener(this);
	reverbMixLabel.setText("dry/wet", dontSendNotification);
	reverbMixLabel.attachToComponent(&reverbMixSlider, false);

	reverbLevelSlider.setSliderStyle(Slider::SliderStyle::RotaryHorizontalDrag);
	reverbLevelSlider.setTextBoxStyle(Slider::TextBoxBelow, false, 120, cutoffFrequencySlider.getTextBoxHeight());
	reverbLevelSlider.setRange(20, 12000);              //These values need to be changed
	reverbLevelSlider.setValue(6000);                   //These values need to be changed
	reverbLevelSlider.setTextValueSuffix(" ");        //These values need to be changed
	reverbLevelSlider.addListener(this);
	reverbLevelLabel.setText("Room Size", dontSendNotification);
	reverbLevelLabel.attachToComponent(&reverbLevelSlider, false);

	addAndMakeVisible(reverbButton);
	addAndMakeVisible(reverbLabel);
	addAndMakeVisible(reverbMixSlider);
	addAndMakeVisible(reverbMixLabel);
	addAndMakeVisible(reverbLevelSlider);
	addAndMakeVisible(reverbLevelLabel);
//**********************************************************************************************************//

	addAndMakeVisible(visualiser);

    setSize (800, 700);
	
	
    // specify the number of input and output channels that we want to open
    setAudioChannels (0, 2);
}

MainComponent::~MainComponent()
{
    // This shuts down the audio device and clears the audio source.
    keyboardState.removeListener (this);
    deviceManager.removeMidiInputCallback (MidiInput::getDevices()[midiInputList.getSelectedItemIndex()], this);
    shutdownAudio();
}

//==============================================================================
void MainComponent::prepareToPlay (int samplesPerBlockExpected, double sampleRate)
{
	dsp::ProcessSpec spec;
	spec.sampleRate = sampleRate;
	spec.maximumBlockSize = 512;
	spec.numChannels = 2;
    // This function will be called when the audio device is started, or when
    // its settings (i.e. sample rate, block size, etc) are changed.
	wave.initialise([](float x) { return fmod(x, 1); }, 128);
	//wave.initialise([](float x) { return std::sin(x); }, 128);
	//wave.initialise([](float x) { return signbit(std::sin(x)); }, 128);
	wave.prepare(spec);
	//wave2.initialise([](float x) { return fmod(x,1); }, 128);
	//wave2.initialise([](float x) { return std::sin(x); }, 128);
	wave2.initialise([](float x) { return signbit(std::sin(x)); }, 128);
	wave2.prepare(spec);
	//wave3.initialise([](float x) { return fmod(x,1); }, 128);
	//wave3.initialise([](float x) { return std::sin(x); }, 128);
	wave3.initialise([](float x) { return signbit(std::sin(x)); }, 128);
	wave3.prepare(spec);
	lp1.prepare(spec);
	rv6.prepare(spec);
	lp1.setMode(dsp::LadderFilter<float>::Mode::LPF12);
	lp1.setCutoffFrequencyHz(5000.0f);            
	lp1.setResonance(0.7f);
	lvl.prepare(spec);

    // You can use this function to initialise any resources you might need,
    // but be careful - it will be called on the audio thread, not the GUI thread.

    // For more details, see the help for AudioProcessor::prepareToPlay()
	visualiser.clear();
}

void MainComponent::getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill)
{
	
    float* leftSpeaker = bufferToFill.buffer->getWritePointer(0, bufferToFill.startSample);//start of buffer fill
    float* rightSpeaker = bufferToFill.buffer->getWritePointer(1, bufferToFill.startSample);
	float* channels[] = { leftSpeaker, rightSpeaker };
	
    /*for (int sample = 0; sample < bufferToFill.buffer->getNumSamples(); ++sample){
        double theWave = wave.SawWave(sample, 440, 0.25); ////input to saw wave function might be a good start to apply MIDI
		
		leftSpeaker[sample] = rightSpeaker[sample] = theWave;
        
    }*/
    // Your audio-processing code goes here!
    
    
	dsp::AudioBlock<float> ab1 = dsp::AudioBlock<float>(channels, 2, bufferToFill.buffer->getNumSamples());
	dsp::ProcessContextReplacing<float> pc = dsp::ProcessContextReplacing<float>(ab1);
    // For more details, see the help for AudioProcessor::getNextAudioBlock()
	wave.process(pc);
	wave2.process(pc);
	wave3.process(pc);
	lp1.process(pc);
	lvl.process(pc);
	
	rv6.process(pc);
	
    // Right now we are not producing any data, in which case we need to clear the buffer
    // (to prevent the output of random noise)
    //bufferToFill.clearActiveBufferRegion(); ///had to comment this out it was killing output
	visualiser.pushBuffer(bufferToFill);
}

void MainComponent::releaseResources()
{
    // This will be called when the audio device stops, or when it is being
    // restarted due to a setting change.

    // For more details, see the help for AudioProcessor::releaseResources()
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    // You can add your drawing code here!
    
}

void MainComponent::resized()
{
	//=========================Slider Sizing and positioning============================
	Rectangle<int> area = getLocalBounds();	//This rectangle is used to scalably map sliders on screen
	
	Rectangle<int> keyboadMidiArea = area.removeFromTop(area.getHeight() / 5); //Keyboard and midi message box placed at top third of the screen
	midiInputList.setBounds(keyboadMidiArea.removeFromTop(30).removeFromRight(getWidth() - 150).reduced(8));
	keyboardComponent.setBounds(keyboadMidiArea.removeFromTop(80).reduced(8));

	visualiser.setBounds(area.removeFromTop(150));
	area.removeFromTop(40); // This separates the keyboard and the audio visualizer
	
	Rectangle<int> filterSection = area.removeFromTop(80); //First row will house the filters section
	area.removeFromTop(40); // This separates the Filter and oscillator section. Purely aesthetic
	Rectangle<int> oscillatorSection = area.removeFromTop(90);//Second row will house oscillator section
	area.removeFromTop(40); // This separates the Filter and oscillator section. Purely aesthetic
	Rectangle<int> reverbAndDelaySection = area.removeFromTop(100); //Third row will house the delay and reverb sections
	area.removeFromTop(40); // This separates the Filter and oscillator section. Purely aesthetic

	//**************************Filter UI********************************************************//
	filterSection.removeFromLeft(filterSection.getWidth() / 6);
	filterTypeButton.setBounds(filterSection.removeFromLeft(filterSection.getWidth() / 5));
	cutoffFrequencySlider.setBounds(filterSection.removeFromLeft(filterSection.getWidth() / 4));
	resonanceSlider.setBounds(filterSection.removeFromLeft(filterSection.getWidth() / 3));
	driveSlider.setBounds(filterSection.removeFromLeft(filterSection.getWidth() / 3));
	//******************************************************************************************//
	//**************************Oscillator UI***************************************************//
	oscillator1.setBounds(oscillatorSection.removeFromLeft(70));
	osc1VolumeSlider.setBounds(oscillatorSection.removeFromLeft(100));
	osc1TuneSlider.setBounds(oscillatorSection.removeFromLeft(100));

	oscillator2.setBounds(oscillatorSection.removeFromLeft(70));
	osc2VolumeSlider.setBounds(oscillatorSection.removeFromLeft(100));
	osc2TuneSlider.setBounds(oscillatorSection.removeFromLeft(100));

	oscillator3.setBounds(oscillatorSection.removeFromLeft(70));
	osc3VolumeSlider.setBounds(oscillatorSection.removeFromLeft(100));
	osc3TuneSlider.setBounds(oscillatorSection.removeFromLeft(100));
	

	//******************************************************************************************//
	//**************************Delay UI********************************************************//
	reverbAndDelaySection.removeFromLeft(reverbAndDelaySection.getWidth() / 7);
	delayButton.setBounds(reverbAndDelaySection.removeFromLeft(70));
	delayMixSlider.setBounds(reverbAndDelaySection.removeFromLeft(100));
	delayFeedbackSlider.setBounds(reverbAndDelaySection.removeFromLeft(100));
	//******************************************************************************************//
	//**************************Reverb UI*******************************************************//
	reverbAndDelaySection.removeFromLeft(50);
	reverbButton.setBounds(reverbAndDelaySection.removeFromLeft(70));
	reverbMixSlider.setBounds(reverbAndDelaySection.removeFromLeft(100));
	reverbLevelSlider.setBounds(reverbAndDelaySection.removeFromLeft(100));

	//******************************************************************************************//

}
void MainComponent::setMidiInput (int index)
{
    auto list = MidiInput::getDevices();
    
    deviceManager.removeMidiInputCallback (list[lastInputIndex], this);
    
    auto newInput = list[index];
    
    if (! deviceManager.isMidiInputEnabled (newInput))
        deviceManager.setMidiInputEnabled (newInput, true);
    
    deviceManager.addMidiInputCallback (newInput, this);
    midiInputList.setSelectedId (index + 1, dontSendNotification);
    
    lastInputIndex = index;
}

void MainComponent::handleIncomingMidiMessage (MidiInput* source, const MidiMessage& message)
{
    const ScopedValueSetter<bool> scopedInputFlag (isAddingFromMidiInput, true);
    keyboardState.processNextMidiEvent (message);
    postMessageToList (message, source->getName());
}

void MainComponent::handleNoteOn (MidiKeyboardState*, int midiChannel, int midiNoteNumber, float velocity)
{
    if (! isAddingFromMidiInput)
    {
        auto m = MidiMessage::noteOn (midiChannel, midiNoteNumber, velocity);
        m.setTimeStamp (Time::getMillisecondCounterHiRes() * 0.001);
        postMessageToList (m, "On-Screen Keyboard");
		wave.setFrequency(m.getMidiNoteInHertz(midiNoteNumber, 432));
		wave2.setFrequency(m.getMidiNoteInHertz(midiNoteNumber, 432));
		wave3.setFrequency(m.getMidiNoteInHertz(midiNoteNumber, 432));

		lvl.setGainLinear(velocity);
		
    }
}

void MainComponent::handleNoteOff (MidiKeyboardState*, int midiChannel, int midiNoteNumber, float /*velocity*/)
{
    if (! isAddingFromMidiInput)
    {
        auto m = MidiMessage::noteOff (midiChannel, midiNoteNumber);
        m.setTimeStamp (Time::getMillisecondCounterHiRes() * 0.001);
        postMessageToList (m, "On-Screen Keyboard");
		
		
		//lvl.setGainLinear(0);
    }
}
