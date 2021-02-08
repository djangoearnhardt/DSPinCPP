/*
  ==============================================================================

    TextComponent.cpp
    Created: 8 Feb 2021 11:30:52am
    Author:  Sam LoBue

  ==============================================================================
*/

#include <JuceHeader.h>
#include "TextComponent.h"

//==============================================================================
TextComponent::TextComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

TextComponent::~TextComponent()
{
}

void TextComponent::paint (juce::Graphics& g)
{
    juce::Font rockwell("Rockwell", "Bold Italic", 30.0f);
    g.setFont(rockwell);
    g.drawText("Mochisoft Limited", 10, 10, 500, 60, juce::Justification::topLeft);
}

void TextComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
