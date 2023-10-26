#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <string>
using namespace std;

class Point
{
	private:
		int x, y; //akeraies syntetagmenes
		char letter; //kefalaio gramma kathe simeiou	
	
	public:
		void setX(int);
		int getX() const;
		void setY(int);
		int getY() const;
		void setLetter(char);
		char getLetter() const;
		void print() const; //ektyponei simeio me ola ta private pedia tou
		Point(int = -1, int = -1, char = '-');
		~Point();	
};
#endif

