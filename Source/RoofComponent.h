/*
  ==============================================================================

    RoofComponent.h
    Created: 8 Feb 2021 11:14:07am
    Author:  Sam LoBue

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class RoofComponent  : public juce::Component
{
public:
    RoofComponent();
    ~RoofComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (RoofComponent)
};
