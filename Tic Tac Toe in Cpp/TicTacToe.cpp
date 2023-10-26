#include "TicTacToe.h"

TicTacToe::TicTacToe()
{
	for(int i = 0; i < 9; i++)
	{
		Point pointInit;
		points[i] = pointInit;
	}

}

void TicTacToe::setWon(bool wstate) 
{
	won = wstate;
}

bool TicTacToe::getWon() const
{
	return won;
}

void TicTacToe::setPointsElement(Point point)
{
	points[3 * point.getY() + point.getX()] = point;
}

bool TicTacToe::checkWon()
{
	if ( ( points[0].getLetter()=='X' && points[4].getLetter()=='X' && points[8].getLetter()=='X' )
	|| ( points[0].getLetter()=='O' && points[4].getLetter()=='O' && points[8].getLetter()=='O' )
	|| ( points[2].getLetter()=='X' && points[4].getLetter()=='X' && points[6].getLetter()=='X' )
	|| ( points[2].getLetter()=='O' && points[4].getLetter()=='O' && points[6].getLetter()=='O' )
	|| ( points[0].getLetter()=='X' && points[1].getLetter()=='X' && points[2].getLetter()=='X' )
	|| ( points[0].getLetter()=='O' && points[1].getLetter()=='O' && points[2].getLetter()=='O' )
	|| ( points[3].getLetter()=='X' && points[4].getLetter()=='X' && points[5].getLetter()=='X' )
	|| ( points[3].getLetter()=='O' && points[4].getLetter()=='O' && points[5].getLetter()=='O' )
	|| ( points[6].getLetter()=='X' && points[7].getLetter()=='X' && points[8].getLetter()=='X' )
	|| ( points[6].getLetter()=='O' && points[7].getLetter()=='O' && points[8].getLetter()=='O' )
	|| ( points[0].getLetter()=='X' && points[3].getLetter()=='X' && points[6].getLetter()=='X' )
	|| ( points[0].getLetter()=='O' && points[3].getLetter()=='O' && points[6].getLetter()=='O' )
	|| ( points[1].getLetter()=='X' && points[4].getLetter()=='X' && points[7].getLetter()=='X' )
	|| ( points[1].getLetter()=='O' && points[4].getLetter()=='O' && points[7].getLetter()=='O' )
	|| ( points[2].getLetter()=='X' && points[5].getLetter()=='X' && points[8].getLetter()=='X' )
	|| ( points[2].getLetter()=='O' && points[5].getLetter()=='O' && points[8].getLetter()=='O' ) )
		
		return true;//setWon(true);
	else 
		return false;//setWon(false);	
}

bool TicTacToe::checkPoint(Point point)
{
	if ( (point.getX() == 0 || point.getX() == 1 || point.getX() == 2) && ( point.getY() == 0 || point.getY() == 1 || point.getY() == 2 ) && (point.getLetter() ==  'X' || point.getLetter() == 'O') && ( points[3 * point.getY() + point.getX()].getLetter() == '-') )
	{
		return true;
	}
	else
	{
		cout<<"Dothikan lathos dedomena!"<<endl;
		return false;
	}

}

void TicTacToe::print() const
{
	cout<<"TRILIZA"<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<"\n";
	cout<<"\t"<<"  "<<points[0].getLetter()<<"  "<<"|"<<"  "<<points[1].getLetter()<<"  "<<"|"<<"  "<<points[2].getLetter()<<"  "<<endl;
	cout<<"\t"<<"-----"<<"+"<<"-----"<<"+"<<"-----"<<endl;
	cout<<"\t"<<"  "<<points[3].getLetter()<<"  "<<"|"<<"  "<<points[4].getLetter()<<"  "<<"|"<<"  "<<points[5].getLetter()<<"  "<<endl;
	cout<<"\t"<<"-----"<<"+"<<"-----"<<"+"<<"-----"<<endl;
	cout<<"\t"<<"  "<<points[6].getLetter()<<"  "<<"|"<<"  "<<points[7].getLetter()<<"  "<<"|"<<"  "<<points[8].getLetter()<<"  "<<endl;
}

TicTacToe::~TicTacToe() {}
