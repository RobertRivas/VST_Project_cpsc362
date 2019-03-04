/*
    This file was auto-generated!
  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================


MainComponent::MainComponent()
{
	dial1.setSliderStyle(Slider::SliderStyle::RotaryVerticalDrag); //configure sliders' properties
	dial1.setTextBoxStyle(Slider::TextBoxBelow, false, 120, dial1.getTextBoxHeight());
	dial1.setRange(0, 1);
	dial1.setValue(0.5);
	dial1Label.setText("Resonance", dontSendNotification);
	dial1Label.attachToComponent(&dial1, false);
	dial1.addListener(this);				//use listener class to detect our changes to the slider values
	addAndMakeVisible(dial1);
	addAndMakeVisible(dial1Label);									//Make sliders & labels visible

	dial2.setSliderStyle(Slider::SliderStyle::RotaryVerticalDrag);
	dial2.setTextBoxStyle(Slider::TextBoxBelow, false, 120, dial2.getTextBoxHeight());
	dial2.setRange(1, 100);
	dial2.setValue(50);
	dial2Label.setText("Drive", dontSendNotification);
	dial2Label.attachToComponent(&dial2, false);
	dial2.addListener(this);
	addAndMakeVisible(dial2);
	addAndMakeVisible(dial2Label);

	frequencySlider.setRange(20, 12000);
	frequencySlider.setValue(6000);
	frequencySlider.setSkewFactorFromMidPoint(6000.0);
	frequencySlider.setTextBoxStyle(Slider::TextBoxLeft, false, 120, frequencySlider.getTextBoxHeight());
	frequencySlider.setTextValueSuffix(" Hz");					//example slider value suffix
	frequencyLabel.setText("Frequency", dontSendNotification); // This is just an example label
	frequencyLabel.attachToComponent(&frequencySlider, true);
	frequencySlider.addListener(this);
	addAndMakeVisible(frequencyLabel);
	addAndMakeVisible(frequencySlider);

	
	
	// Make sure you set the size of the component after
    // you add any child components.
    setSize (800, 600);
	
	
    // specify the number of input and output channels that we want to open
    setAudioChannels (0, 2);
}

MainComponent::~MainComponent()
{
    // This shuts down the audio device and clears the audio source.
    shutdownAudio();
}

//==============================================================================
void MainComponent::prepareToPlay (int samplesPerBlockExpected, double sampleRate)
{
	dsp::ProcessSpec spec;
	spec.sampleRate = sampleRate;
    // This function will be called when the audio device is started, or when
    // its settings (i.e. sample rate, block size, etc) are changed.
	
	lp1.prepare(spec);
	rv6.prepare(spec);

    // You can use this function to initialise any resources you might need,
    // but be careful - it will be called on the audio thread, not the GUI thread.

    // For more details, see the help for AudioProcessor::prepareToPlay()
}

void MainComponent::getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill)
{
	lp1.setMode(dsp::LadderFilter<float>::Mode::LPF12);
    float* leftSpeaker = bufferToFill.buffer->getWritePointer(0, bufferToFill.startSample);//start of buffer fill
    float* rightSpeaker = bufferToFill.buffer->getWritePointer(1, bufferToFill.startSample);
	float* channels[] = { leftSpeaker, rightSpeaker };
    for (int sample = 0; sample < bufferToFill.buffer->getNumSamples(); ++sample){
        double theWave = wave.SawWave(sample, 440, 0.25); ////input to saw wave function might be a good start to apply MIDI
		
		leftSpeaker[sample] = rightSpeaker[sample] = theWave;
        
    }
    // Your audio-processing code goes here!
	dsp::AudioBlock<float> ab1 = dsp::AudioBlock<float>::AudioBlock(channels, 2, bufferToFill.buffer->getNumSamples());
	dsp::ProcessContextReplacing<float> pc = dsp::ProcessContextReplacing<float>::ProcessContextReplacing(ab1);
    // For more details, see the help for AudioProcessor::getNextAudioBlock()
	lp1.process(pc);
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
	Rectangle<int> area = getLocalBounds();	//This rectangles are used to map sliders on screen
	Rectangle<int> dialArea = area.removeFromBottom(area.getHeight() / 2); //dialArea targets the bottom of screen

	frequencySlider.setBounds(100, 40, getWidth() - 130, 20);
	dial1.setBounds(dialArea.removeFromLeft(area.getWidth() / 2)); //Set position to bottom left of screen
	dial2.setBounds(dialArea.removeFromRight(area.getWidth() / 2)); //Set position to bottom right of screen
																	//=================================================================================


    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}
