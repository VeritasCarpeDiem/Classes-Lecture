#include <iostream>
#include <string>
#include "Square.h"
using namespace std;

class Student
{
private:
	string address;
	double gpa;
	string name;
	char gender;

public:

	char getGenderType();
};

char Student::getGenderType()
{
	if (gender == 'M' || gender == 'F')
	{
		return gender;
	}
	else
	{
		
	}
}
////////////////////////////////////////////

//write a program to calculate the area of a square




int main()
{
	Square s;
	s.setWidth(2);
	s.setHeight(4);

	s.calculateArea();
	return 0;
}
//////////////////
class Cube
{
private:
	int length, width, height;
public:
	void calculateVolume();
	void calculateSA();

	void setWidth(int n) { width = n; }
	void setHeight(int h) { height = h; }
	void setLength(int l) { length = l; }

	int getWidth() { return width; }
	int getHeight() { return height; }
	int getLength() { return length; }
};

void Cube::calculateVolume()
{
	cout << "Volume = " << length * width * height << endl;
}

void Cube::calculateSA()
{
	cout << "Surface Area= " << 6 * length << endl;
}

void main()
{
	Cube s;
	s.setWidth(2);
	s.setHeight(4);
	s.setLength(3);

	s.calculateVolume();
	s.calculateSA();
}