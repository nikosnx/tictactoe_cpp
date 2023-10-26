#include "Point.h"
Point::Point(int xValue, int yValue, char letterValue)
{
	setX(xValue);
	setY(yValue);
	setLetter(letterValue);
}

void Point::setX(int xValue)
{
	x = xValue;
}

void Point::setY(int yValue)
{
	y = yValue;
}

void Point::setLetter(char letterValue)
{
	letter = toupper(letterValue);
}

int Point::getX() const
{
	return x;
}

int Point::getY() const
{
	return y;
}

char Point::getLetter() const
{
	return letter;
}

void Point::print() const
{
	cout<<"("<<getX()<<", "<<getY()<<")"<<" Value: "<<getLetter()<<endl;
}

Point::~Point() 
{}