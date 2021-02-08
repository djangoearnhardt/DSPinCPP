/*
  ==============================================================================

    SunComponent.h
    Created: 8 Feb 2021 11:26:31am
    Author:  Sam LoBue

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class SunComponent  : public juce::Component
{
public:
    SunComponent();
    ~SunComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SunComponent)
};
