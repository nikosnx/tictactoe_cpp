#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <iostream>
#include <string>
#include "Point.h"

using namespace std;

class TicTacToe
{
	private:
		bool won; //true i false analoga an exei yparksei nikitis 
		Point points[9]; //9 antikeimena klasis Point(), kathena 1 ap ta 9 koutakia
	public:
		void setWon(bool);
		bool getWon() const;
		bool checkPoint(Point); //true: both coords 0-2 && den exei paiksei allos idia thesi && gramma=‘X’ || ‘x’ || ‘Ο’ || ‘ο’ alios enimeronei gia lathos dedomena eisodou - k dinei false 
		void setPointsElement(Point); //παιρνει Point obj, save sto point array sti thesi pou orizei to point only if checkPoint exei dosei true 
		bool checkWon(); // elegxos an exei yparksei nikitis, (eite diagonia (2 cases), eite katakoryfa (3 cases) eite orizontia(3 cases)) kai thetei ti won se true allios false
		void print() const; //print Point points[9] se morfi trilizas kai sti thesi kathe stoixeiou -> antistoixo dothen gramma
		TicTacToe(); //dinei se oles tis theseis '-'
		~TicTacToe(); //destroy triliza eite meta apo niki eite meta apo isopalia
};

#endif