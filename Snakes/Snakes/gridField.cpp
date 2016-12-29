#include "stdafx.h"
#include "gridField.h"


gridField::gridField()
{
}


gridField::~gridField()
{
}

// Set the colour of the field
void gridField::setColour(string newColour)
{
	colour = newColour;
}

// Get the current colour of the field
string gridField::getColour()
{
	return colour;
}

// Set the boolean of this field, signalling whether it is movable or not
void gridField::setMovable(bool newMovable)
{
	movable = newMovable;
}

// Get the boolean of whether this field is currently movable or not
bool gridField::getMovable()
{
	return movable;
}