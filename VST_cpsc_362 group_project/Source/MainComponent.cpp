/*


    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================


MainComponent::MainComponent()
{
//==========================================Create Sliders===========================================
	
	/*For loading from saved audio presets
	if (loading){
		read from a saved (text) file the slider settings (we can choose to format save files in a way that would be easy to read)
		set starting values of sliders, like : dial1.setValue(value read from file)
	}
	*/
	
	dial1.setSliderStyle(Slider::SliderStyle::Rotary); //configure sliders' properties
	dial1.setTextBoxStyle(Slider::TextBoxBelow, false, 120, dial1.getTextBoxHeight());
	dial1Label.setText("inputLabel", dontSendNotification);
	dial1Label.attachToComponent(&dial1, false);
	dial1.addListener(this);				//use listener class to detect our changes to the slider values
	addAndMakeVisible(dial1);
	addAndMakeVisible(dial1Label);									//Make sliders & labels visible

	dial2.setSliderStyle(Slider::SliderStyle::Rotary);
	dial2.setTextBoxStyle(Slider::TextBoxBelow, false, 120, dial2.getTextBoxHeight());
	dial2Label.setText("inputLabel", dontSendNotification);
	dial2Label.attachToComponent(&dial2, false);
	dial2.addListener(this);
	addAndMakeVisible(dial2);
	addAndMakeVisible(dial2Label);

	frequencySlider.setRange(50, 5000);
	frequencySlider.setSkewFactorFromMidPoint(500.0);
	frequencySlider.setTextBoxStyle(Slider::TextBoxLeft, false, 120, frequencySlider.getTextBoxHeight());
	frequencySlider.setTextValueSuffix(" Hz");					//example slider value suffix
	frequencyLabel.setText("Frequency", dontSendNotification); // This is just an example label
	frequencyLabel.attachToComponent(&frequencySlider, true);
	frequencySlider.addListener(this);
	addAndMakeVisible(frequencyLabel);
	addAndMakeVisible(frequencySlider);
//===================================================================================================
	
	// Make sure you set the size of the component after
    // you add any child components.
    setSize (600, 400);
	
	
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
    // This function will be called when the audio device is started, or when
    // its settings (i.e. sample rate, block size, etc) are changed.
	IIRCoefficients temp = IIRCoefficients::makeLowPass(sampleRate, 10000, 5); 
	lp1.setCoefficients(temp);
    // You can use this function to initialise any resources you might need,
    // but be careful - it will be called on the audio thread, not the GUI thread.

    // For more details, see the help for AudioProcessor::prepareToPlay()
}

void MainComponent::getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill)
{

	float* leftSpeaker = bufferToFill.buffer->getWritePointer(0, bufferToFill.startSample);//start of buffer fill
    float* rightSpeaker = bufferToFill.buffer->getWritePointer(1, bufferToFill.startSample);
    
    for (int sample = 0; sample < bufferToFill.buffer->getNumSamples(); ++sample){
        double theWave = wave.SawWave(sample, 440, 0.25); ////input to saw wave function might be a good start to apply MIDI
		
        leftSpeaker[sample] = rightSpeaker[sample] = theWave;
		
        
    }
    // Your audio-processing code goes here!

    // For more details, see the help for AudioProcessor::getNextAudioBlock()
	lp1.processSamples(leftSpeaker, bufferToFill.buffer->getNumSamples());
	lp1.processSamples(rightSpeaker, bufferToFill.buffer->getNumSamples());
    // Right now we are not producing any data, in which case we need to clear the buffer
    // (to prevent the output of random noise)
    bufferToFill.clearActiveBufferRegion(); ///had to comment this out it was killing output
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
	//************************************************************
	// (Our component is opaque, so we must completely fill the background with a solid colour)
	g.fillAll(getLookAndFeel().findColour(ResizableWindow::backgroundColourId));
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
