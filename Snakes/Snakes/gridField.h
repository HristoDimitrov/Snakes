#include <iostream>

using namespace std;

#pragma once
class gridField
{
public:
	string colour; //Colour of the field
	int cur_x, cur_y; //Current coordinates of the field
	int next_x, next_y; //New coordinates of the field after being moved
	bool movable; //Boolean for whether the field is movable or not


	gridField();
	~gridField();


	void setColour(string newColour);
	string getColour();

	void setMovable(bool newMovable);
	bool getMovable();



};

