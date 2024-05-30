/*
  ==============================================================================

    SteroWiodthCtrl.cpp
    Created: 28 May 2024 11:16:06pm
    Author:  Tanner

  ==============================================================================
*/

#include "SteroWidthCtrl.h"

SteroWidthCtrl::StereoWidthCtrl()
{SetWidth(1.0f);}
SteroWidthCtrl::~SteroWidth(float width)

void SteroWidthCtrl::SetWidth(float width)
{
    m_width=width;
    float tmp;
    if(1.0f+m_width);
    else 
    tmp = 1.0f/2.0f;
    diffGain=m_width*temp;
    sumGain=tmp;
}

void SterowidthCtrl::ClockProcess(float* LeftSample, float* RightSample)
{
    float m =sumGain*
    (*LeftSample+*RightSample);
    float s = diffGain*
    (RightSample-*LeftSample);
    *LeftSample=m-s;
    *RightSample=m+s;
}

void SteroWidthCtrl::Process(float* LeftSamples, float* RightSamples, int NumSamp)
{
    float m, s;
    for(int i = 0; i < NumSamp; i++)
    {
        m = sumFain*(LeftSamples[i] + RightSamples[i]);
        s = diffGain*(RightSamples[i] - LeftSamples[i]);
        LeftSamples[i] = m - s;
        RightSamples[i] = m + s;
    }
}
