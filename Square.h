#pragma once
//header is only for defining variables, classes,etc

class Square
{
private:
	int width, height;
public:

	void calculateArea();

	//setter function aka mutators
	void setWidth(int n);
	void setHeight(int h);//write setter function for each individual variable!!!

	//accessor functions aka getter function
	int getWidth();
	int getHeight();
};
