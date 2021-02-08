/*
  ==============================================================================

    RoofComponent.cpp
    Created: 8 Feb 2021 11:14:07am
    Author:  Sam LoBue

  ==============================================================================
*/

#include <JuceHeader.h>
#include "RoofComponent.h"

//==============================================================================
RoofComponent::RoofComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

RoofComponent::~RoofComponent()
{
}

void RoofComponent::paint (juce::Graphics& g)
{
    g.setColour(juce::Colours::red);
    juce::Path roofPath;
    roofPath.startNewSubPath(200, 190);
    roofPath.lineTo(400, 190);
    roofPath.lineTo(300, 140);
    roofPath.closeSubPath();
    
    g.fillPath(roofPath);
    g.strokePath(roofPath, juce::PathStrokeType(2.0f));
}

void RoofComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
