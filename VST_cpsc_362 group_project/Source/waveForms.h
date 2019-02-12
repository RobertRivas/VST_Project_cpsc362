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
        double result = 0;
        double sawIncr = (2 * freq) / 44100;
	    double sawValue = -1;
	    
	    for (int n = 0; n < time; n++)
	    {
		    result = sawValue;
		    if ((sawValue += sawIncr) >= 1)
			    sawValue -= 2;
	    }
    
        return result * amp;
    }
    
};





