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
    

    
	
   
	
	
	
	
	
	resonanceSlider.setSliderStyle(Slider::SliderStyle::RotaryVerticalDrag); //configure sliders' properties
	resonanceSlider.setTextBoxStyle(Slider::TextBoxBelow, false, 120, resonanceSlider.getTextBoxHeight());
	resonanceSlider.setRange(0, 1);
	resonanceSlider.setValue(0.5);
	resonanceLabel.setText("Resonance", dontSendNotification);
	resonanceLabel.attachToComponent(&resonanceSlider, false);
	resonanceSlider.addListener(this);				//use listener class to detect our changes to the slider values
	addAndMakeVisible(resonanceSlider);
	addAndMakeVisible(resonanceLabel);									//Make sliders & labels visible

	driveSlider.setSliderStyle(Slider::SliderStyle::RotaryVerticalDrag);
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

	filterButton.setButtonText("low pass"); //Default 
	filterButton.setToggleState(false, NotificationType::dontSendNotification);
	filterLabel.setText("Filter Type", dontSendNotification);
	filterLabel.attachToComponent(&filterButton, false);
	filterButton.addListener(this);
	addAndMakeVisible(filterButton);
	addAndMakeVisible(filterLabel);


	
	// Make sure you set the size of the component after
    // you add any child components.
    setSize (800, 600);
	
	
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
	
	Rectangle<int> keyboadMidiArea = area.removeFromTop(area.getHeight() / 4); //Keyboard and midi message box placed at top third of the screen
	midiInputList.setBounds(keyboadMidiArea.removeFromTop(30).removeFromRight(getWidth() - 150).reduced(8));
	keyboardComponent.setBounds(keyboadMidiArea.removeFromTop(80).reduced(8));
	
	Rectangle<int> sliderDialArea = area.removeFromTop(area.getHeight() - (area.getHeight() / 3)); //dials and sliders will fall right below keyboard and midi message box
	Rectangle<int> filterSection = sliderDialArea.removeFromTop(sliderDialArea.getHeight() / 3); //First row will house the filters section
	Rectangle<int> oscillatorSection = sliderDialArea.removeFromTop(sliderDialArea.getHeight() / 3);//Second row will house oscillator section
	Rectangle<int> delaySection = sliderDialArea.removeFromTop(sliderDialArea.getHeight() / 3); //Third row will house the delay section
	Rectangle<int> reverbSection = sliderDialArea.removeFromTop(sliderDialArea.getHeight() / 3); //Fourth row will house the reverb section

	//**************************Filter UI********************************************************//
	filterButton.setBounds(filterSection.removeFromLeft(filterSection.getWidth() / 5));
	cutoffFrequencySlider.setBounds(filterSection.removeFromLeft(filterSection.getWidth() / 4));
	resonanceSlider.setBounds(filterSection.removeFromLeft(filterSection.getWidth() / 3));
	driveSlider.setBounds(filterSection.removeFromLeft(filterSection.getWidth() / 3));
	//******************************************************************************************//
	//**************************Oscillator UI***************************************************//


	//******************************************************************************************//
	//**************************Delay UI********************************************************//

	//******************************************************************************************//
	//**************************Reverb UI*******************************************************//

	//******************************************************************************************//
	//auto area = getLocalBounds();
    

	//frequencySlider.setBounds(100, 40, getWidth() - 130, 20);
	//dial1.setBounds(dialArea.removeFromLeft(area.getWidth() / 2)); //Set position to bottom left of screen
	//dial2.setBounds(dialArea.removeFromRight(area.getWidth() / 2)); //Set position to bottom right of screen
																	//=================================================================================


    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
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
