/*
  ==============================================================================

    WallComponent.cpp
    Created: 4 Feb 2021 2:16:54pm
    Author:  Sam LoBue

  ==============================================================================
*/

#include <JuceHeader.h>
#include "WallComponent.h"

//==============================================================================
WallComponent::WallComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

WallComponent::~WallComponent()
{
}

void WallComponent::paint (juce::Graphics& g)
{
    juce::Rectangle <float> wall(200, 200, 200, 120);
    g.fillCheckerBoard(wall, 10, 10, juce::Colours::salmon, juce::Colours::darksalmon);
}

void WallComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
