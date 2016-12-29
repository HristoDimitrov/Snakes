#include "stdafx.h"
#include "gridField.h"


gridField::gridField()
{
}


gridField::~gridField()
{
}

void gridField::setColour(string newColour)
{
	colour = newColour;
}

string gridField::getColour()
{
	return colour;
}
