/*
  ==============================================================================

    SteroWiodthCtrl.h
    Created: 28 May 2024 11:16:29pm
    Author:  Tanner
    
  ==============================================================================

Volume-Normalized Stereo Width Control, contributed by Michael Gruhn to the
MusicDSP Source Code Archive: http://musicdsp.org/showArchiveComment.php?ArchiveID=256
'width' is the stretch factor of the stereo field:
width < 1: decrease in stereo width
width = 1: no change
width > 1: increase in stereo width
width = 0: mono*/

#pragma once

class SteroWidthCtrl
{
    public:
    StereoWidthCtrl();
    ~SteroWidthCtrl();
    
    //Params
    void SetWidth(float width);
    float GetWidth(void){return m_width;]:


    //USE
    void ClockProcess(float* LeftSample, float* RightSample);
    void Process(float* LeftSample, float* RightSample, int NumSample);
    private:
    float m_width, sumGain, diffGain;
};