#include "Square.h" //include this
#include <iostream>

using namespace std;

void Square::calculateArea()
{
	cout << "Area= " << width * height << endl;
}

void Square::setWidth(int n)
{
	width = n; 
}

void Square::setHeight(int h)
{
	height = h;
}

int Square::getWidth() 
{
	return width; 
}

int Square::getHeight() 
{
	return height;
}


