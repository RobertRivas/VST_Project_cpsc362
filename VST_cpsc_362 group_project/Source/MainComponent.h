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
class MainComponent   : public AudioAppComponent
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent();

    //==============================================================================
    void prepareToPlay (int samplesPerBlockExpected, double sampleRate) override;
    void getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill) override;
    void releaseResources() override;

    //==============================================================================
    void paint (Graphics& g) override;
    void resized() override;

private:
    waveForms wave; ///call to wave form class in waveforms.h
    
    dsp::Oscillator<float> wave2; //created this instance to get the ball rolling on calling juce classes from documentation
    //i had to manually add this dsp module from the modules section to the left on the projucer here is documentation https://docs.juce.com/master/juce__Oscillator_8h.html
    
    //==============================================================================
    // Your private member variables go here...


    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};



