/*
  ==============================================================================

    TextComponent.h
    Created: 8 Feb 2021 11:30:52am
    Author:  Sam LoBue

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class TextComponent  : public juce::Component
{
public:
    TextComponent();
    ~TextComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TextComponent)
};
