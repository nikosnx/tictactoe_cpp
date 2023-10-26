#include <iostream>
#include <conio.h>
using namespace std;
#include "Point.h"
#include "TicTacToe.h"

int main()
{
	int i = 0;
	bool b = true;
	bool iswinwin = false;
	string win = "KERDISE O PAIXTIS ";
	string winwin = "ISOPALIA\n";
	string wrongData = "Lathos dedomena eisodou, prospathiste ksana!\n";
	char sym;
	int x, y;

	TicTacToe tictactoe;

	do {	
		system("CLS");		
		tictactoe.print();
		cout<<"\n\nPAIKTI "<<!b + 1<<", me ti symvolo paizeis? Apanta me 'O, 'o', 'X', 'x': "<<endl;
		sym = getche();
		cout<<"\nPAIKTI "<<!b + 1<<", to symvolo sou einai "<<sym<<".\n\n";
		cout<<"Se poia thesi thes na paikseis me to symvolo "<<sym<<"? Apanta me ton arithmo grammis, arithmo stilis, apo 0 mexri 2, XWRIS KOMMA (px 0 0): ";
		cin>>x>>y;

		Point insertedPoint(x, y, sym);
			
		while (!(tictactoe.checkPoint(insertedPoint)))
			{
				system("PAUSE");
				system("CLS");
				tictactoe.print();
				cout<<"\n\nPAIKTI "<<!b + 1<<", me ti symvolo paizeis? Apanta me 'O, 'o', 'X', 'x': "<<endl;
				sym = getche();

				cout<<"\nPAIKTI "<<!b + 1<<", to symvolo sou einai "<<sym<<".\n\n";
				cout<<"Se poia thesi thes na paikseis me to symvolo "<<sym<<"? Apanta me ton arithmo grammis, arithmo stilis, apo 0 mexri 2, XWRIS KOMMA (px 0 0):";
				cin>>x>>y;
				insertedPoint.setX(x);
				insertedPoint.setY(y);
				insertedPoint.setLetter(sym);
			} 


		tictactoe.setPointsElement(insertedPoint);
		system("CLS");
		tictactoe.print();
		tictactoe.checkWon();
		i++;
		if (tictactoe.checkWon())
		{
			tictactoe.setWon(true);
			cout<<win<<!b + 1<<endl;
		}

		if (i == 9) 
		{
			cout<<winwin<<endl;
			break;			
		}

		b = !b;
		insertedPoint.~Point();
		
	} while (!(tictactoe.getWon()));

	system("PAUSE");
	tictactoe.~TicTacToe();
}

/*
To programma sas tha diathetei synartisi main i opoia tha proteinei apo ton 1o paikti na epilexei an thelei na paixei me to symvolo O i me to symvolo Ch (i ta antistoicha peza (mikra) grammata STA ANGLIKA).

Sti synecheia tha zitaei tis syntetagmenes theseis tou kathe symvolou. Pch an valei 2 2 o paiktis, afto simainei 3i grammi, 3i stili.

 To programma de tha prepei na epitrepei se enan paikti na paixei se mia idi «paigmeni» thesi. Epipleon, de tha prepei na epitrepei na dosei o pelatis lathos dedomena (pch noumero ektos ton orion tis trilizas, arithmous me komma, lexeis i grammata klp). An o pelatis valei to otidipote apo ta parapano, to programma sas tha prepei na ton epanaprotrepei na pliktrologisei egkyra dedomena. 

Meta apo kathe seira paikti, na exafanizontai ta panta kai na epanemfanizetai i triliza enimeromeni me tin epilogi tou paikti pou molis epaixe.

An kaneis den kerdizei, to programma tha prepei na emfanizei to minyma Isopalia. An kerdisei kapoios paiktis, tote to programma prepei na termatizei kai na emfanizei katallilo minyma
  
*/
