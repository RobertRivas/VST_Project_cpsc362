/*
  ==============================================================================

    waveForm.h
    Created: 12 Feb 2019 3:32:19pm
    Author:  Robert Rivas

  ==============================================================================
*/
#include<math.h>
#pragma once


class waveForms {
    
    

    


    int time;
    double freq;
    double amp;
public:
    

    
    double SawWave(int time, double freq, double amp) { /////saw wave function
        
        double sawIncr = (2 * freq) / 44100;
	    double sawValue = -1;
	    
        if ((sawValue += (sawIncr * time)) >= 1)
          sawValue = (fmod(sawValue + 1, 2.0)) - 1;
        
        return sawValue * amp;
    }
	
    
};





