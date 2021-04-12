#include "tictactoe2.h"
using namespace std;


TicTacToe::TicTacToe() {
}

void TicTacToe::displayboard()
{
	system("cls");
	cout << "			 ___ ___ ___" << endl << endl;
	cout << "			[ " << array[0] << " | " << array[1] << " | " << array[2] << " ]" << endl;
	cout << "			 ___ ___ ___" << endl << endl;
	cout << "			[ " << array[3] << " | " << array[4] << " | " << array[5] << " ]" << endl;
	cout << "			 ___ ___ ___" << endl << endl;
	cout << "			[ " << array[6] << " | " << array[7] << " | " << array[8] << " ]" << endl;
	cout << "			 ___ ___ ___" << endl << endl;
}

void TicTacToe::boardchoice(int c)
{
	switch (c)
	{
	case 1:
		if (turn % 2 != 0) {
			array[0] = p1symbol; 
		}
		else {
			array[0] = p2symbol;
			break;
		}

	case 2:
		if (turn % 2 != 0) {
			array[1] = p1symbol;
		}
		else { 
			array[1] = p2symbol;
			break; 
		}

	case 3:
		if (turn % 2 != 0) { 
			array[2] = p1symbol; 
		}
		else { 
			array[2] = p2symbol;
			break;
		}

	case 4:
		if (turn % 2 != 0) {
			array[3] = p1symbol; 
		}
		else { 
			array[3] = p2symbol; 
			break;
		}

	case 5:
		if (turn % 2 != 0) {
			array[4] = p1symbol; 
		}
		else { 
			array[4] = p2symbol; 
			break;
		}

	case 6:
		if (turn % 2 != 0) {
			array[5] = p1symbol; 
		}
		else { 
			array[5] = p2symbol;
			break; 
		}

	case 7:
		if (turn % 2 != 0) {
			array[6] = p1symbol;
		}
		else {
			array[6] = p2symbol;
			break; 
		}

	case 8:
		if (turn % 2 != 0) { 
			array[7] = p1symbol;
		}
		else {
			array[7] = p2symbol;
			break; 
		}

	case 9:
		if (turn % 2 != 0) { 
			array[8] = p1symbol;
		}
		else { 
			array[8] = p2symbol;
			break; 
		}
	}
}

void TicTacToe::displayscore() 
{
	cout << "		            SCORE\n";
	cout << "		            ~~~~~\n";
	cout << "	  " << p1 << "		    DRAW		" << p2 << endl;
	cout << "	   " << p1score << "	 	      " << drawscore << "			 " << p2score << endl << endl;

}

void TicTacToe::hrungetmove()
{
	do {
		displayboard();
		if (turn % 2 != 0)
		{
			cout << p1 << " which numbered box do you choose?";
			cin >> boxchoice;
			boardchoice(boxchoice);
			totalmovecounter++;
		}
		else
		{
			cout << p2 << " which numbered box do you choose?";
			cin >> boxchoice;
			boardchoice(boxchoice);
			totalmovecounter++;
		}
		hcheckforwin();
		++turn;
	} while (istherewinner == false);

}


void TicTacToe::hcheckforwin() 
{
	if (((array[0] == 'X') && (array[1] == 'X') && (array[2] == 'X')) || ((array[3] == 'X') && (array[4] == 'X') && (array[5] == 'X')) || ((array[6] == 'X') && (array[7] == 'X') && (array[8] == 'X'))) {
		displayboard();
		istherewinner = true;
		cout << p1 << " is the WINNER with a horizontal win!\n\n";
		++p1score; displayscore();
		humanmenu();
	}
	else if (((array[0] == 'O') && (array[1] == 'O') && (array[2] == 'O')) || ((array[3] == 'O') && (array[4] == 'O') && (array[5] == 'O')) || ((array[6] == 'O') && (array[7] == 'O') && (array[8] == 'O'))) {
		displayboard();
		istherewinner = true;
		cout << p2 << " is the WINNER with a horizontal win!\n\n";
		++p2score;
		displayscore();
		humanmenu();
	}
	else if (((array[0] == 'X') && (array[3] == 'X') && (array[6] == 'X')) || ((array[1] == 'X') && (array[4] == 'X') && (array[7] == 'X')) || ((array[2] == 'X') && (array[5] == 'X') && (array[8] == 'X'))) {
		displayboard();
		istherewinner = true;
		cout << p1 << " is the WINNER with a vertical win!\n\n";
		++p1score;
		displayscore();
		humanmenu();
	}
	else if (((array[0] == 'O') && (array[3] == 'O') && (array[6] == 'O')) || ((array[1] == 'O') && (array[4] == 'O') && (array[7] == 'O')) || ((array[2] == 'O') && (array[5] == 'O') && (array[8] == 'O'))) {
		displayboard();
		istherewinner = true;
		cout << p2 << " is the WINNER with a vertical win!\n\n";
		++p2score;
		displayscore();
		humanmenu();
	}
	else if (((array[0] == 'X') && (array[4] == 'X') && (array[8] == 'X')) || ((array[2] == 'X') && (array[4] == 'X') && (array[6] == 'X'))) {
		displayboard();
		istherewinner = true;
		cout << p1 << " is the WINNER with a diagonal win!\n\n";
		++p1score;
		displayscore();
		humanmenu();
	}
	else if (((array[0] == 'O') && (array[4] == 'O') && (array[8] == 'O')) || ((array[2] == 'O') && (array[4] == 'O') && (array[6] == 'O'))) {
		displayboard();
		istherewinner = true;
		cout << p2 << " is the WINNER with a diagonal win!\n\n";
		++p2score;
		displayscore();
		humanmenu();
	}

	else if (totalmovecounter == 9) {
		displayboard();
		istherewinner = true;
		cout << "THERE IS NO WINNER! IT IS A DRAW\n\n";
		++drawscore;
		displayscore();
		humanmenu();
	}
}

void TicTacToe::crun()
{
	if (p1 == "COMP")
		do {
			compstrategy();
			totalmovecounter++;
			hcheckforwin();
			++turn;
			displayboard();
			cout << p2 << " which numbered box do you choose?";
			cin >> boxchoice;
			boardchoice(boxchoice);
			totalmovecounter++;
			hcheckforwin();
			++turn;
		} while (istherewinner == false);
	else if (p2 == "COMP")
		do {
			displayboard();
			cout << p1 << " which numbered box do you choose?";
			cin >> boxchoice;
			boardchoice(boxchoice);
			totalmovecounter++;
			hcheckforwin();
			++turn;
			compstrategy();
			totalmovecounter++;
			hcheckforwin();
			++turn;
		} while (istherewinner == false);

}


void TicTacToe::compstrategy()
{
	if (p1 == "COMP" && compmove == 0) {
		boardchoice(5);
		compmove++;
	}

	else if (p1 == "COMP" && compmove == 1)
	{
		if (array[2] == '3') {
			boardchoice(3);
			compmove++;
		}
		else if (array[8] == '9') {
			boardchoice(9);
			compmove++;
		}
	}

	else if (p1 == "COMP" && compmove == 2)
	{
		if (array[2] == 'X') {
			if (array[6] == '7') {
				boardchoice(7);
				compmove++;
			}
			else if (array[8] == '9') {
				boardchoice(9);
				compmove++;
			}
			else if (array[0] == '1') {
				boardchoice(1);
				compmove++;
			}
		}
		if (array[8] == 'X') {
			if (array[0] == '1') {
				boardchoice(1);
				compmove++;
			}
			else if (array[6] == '7') {
				boardchoice(7);
				compmove++;
			}
		}
	}

	else if (p1 == "COMP" && compmove == 3)
	{
		if (array[2] == 'X') {
			if (array[5] == '6') {
				boardchoice(6);
				compmove++;
			}
			else if (array[0] == '1') {
				boardchoice(1);
				compmove++;
			}
		}
		if (array[8] == 'X') {
			if (array[7] == '8') {
				boardchoice(8);
				compmove++;
			}
			else if (array[2] == '3') {
				boardchoice(3);
				compmove++;
			}
		}
	}

	else if (p2 == "COMP" && compmove == 0)
	{
		if (array[4] == '5') {
			boardchoice(5);
			compmove++;
		}
		else if (array[2] == '3') {
			boardchoice(3);
			compmove++;
		}
	}


	else if (p2 == "COMP" && compmove == 1)
	{
		if (array[2] == '3') {
			boardchoice(3);
			compmove++;
		}
		else if (array[8] == '9') {
			boardchoice(9);
			compmove++;
		}
	}

	else if (p2 == "COMP" && compmove == 2)
	{
		if (array[2] == 'O') {
			if (array[6] == '7') {
				boardchoice(7);
				compmove++;
			}
			else if (array[8] == '9') {
				boardchoice(9);
				compmove++;
			}
			else if (array[0] == '1') {
				boardchoice(1);
				compmove++;
			}

		}
		if (array[8] == 'O') {
			if (array[6] == '7') {
				boardchoice(7);
				compmove++;
			}
			else if (array[0] == '1') {
				boardchoice(1);
				compmove++;
			}
		}
	}
	else if (p2 == "COMP" && compmove == 3)
	{
		if (array[2] == 'O') {
			if (array[5] == '6') {
				boardchoice(6);
				compmove++;
			}
			else if (array[0] == '1') {
				boardchoice(1);
				compmove++;
			}
		}
		if (array[8] == 'O') {
			if (array[0] == '1') {
				boardchoice(1);
				compmove++;
			}
			if (array[7] == '8') {
				boardchoice(8);
				compmove++;
			}
			else if (array[2] == '3') {
				boardchoice(3);
				compmove++;
			}
		}
	}
	else if (p2 == "COMP" && compmove == 4)
	{
		if (array[2] == 'O') {
			if (array[5] == '6') {
				boardchoice(6);
				compmove++;
			}
			else if (array[0] == '1') {
				boardchoice(1);
				compmove++;
			}
		}
		if (array[8] == 'O') {
			if (array[7] == '8') {
				boardchoice(8);
				compmove++;
			}
			else if (array[2] == '3') {
				boardchoice(3);
				compmove++;
			}
		}
	}
}



void TicTacToe::humanmenu()
{
	cout << "1.Play Again?\n2.Main Menu\n3.Quit\n";
	cin >> menuchoice;
	switch (menuchoice)
	{
	case 1:
		hresetboard();
		if (p1 == "COMP" || p2 == "COMP") {
			crun();
		}
		else {
			hrungetmove();
		}
		break;

	case 2:resetscores(); hresetboard();
		Play();
		break;

	case 3: exit(0);
	}
}

int TicTacToe::Play()
{

	system("cls");
	cout << "			  Main Menu\n";
	cout << "			  ~~~~~~~~~\n";
	cout << "			1. vs COMPUTER\n";
	cout << "			2. 2 Human Players\n";
	cout << "			3. How to Play T!C-t@c-TOe?\n";
	cout << "			4. Quit\n\n";
	cin >> menuchoice;

	switch (menuchoice)
	{
	case 1:cout << "CHOOSE:\n1.Player1\n2.Player2\n";
		cin >> menuchoice;
		if (menuchoice == 1) {
			p2 = "COMP"; 
			cout << "What is your nickname Player 1?\n"; 
			cin >> p1;
		}
		else { 
			p1 = "COMP";
			cout << "What is your nickname Player 2?\n"; 
			cin >> p2; }
			crun();
			break;

	case 2:
		cout << "PLAYER 1 WHAT IS YOUR NICKNAME? ";
		cin >> p1;
		cout << "PLAYER 2 WHAT IS YOUR NICKNAME? ";
		cin >> p2;
		hrungetmove();
		break;

	case 3:
		cout << "TAKE TURNS, GET 3 OF YOUR SYMBOLS IN A ROW AND YOU WIN! SIMPLE!\n";
		system("pause");
		Play();
		break;

	case 4: exit(0);
	}
}

void TicTacToe::resetscores() { p1score = 0, p2score = 0, drawscore = 0, p1 = "", p2 = ""; }

void TicTacToe::hresetboard()
{
	totalmovecounter = 0;
	array[0] = '1';
	array[1] = '2';
	array[2] = '3';
	array[3] = '4';
	array[4] = '5';
	array[5] = '6';
	array[6] = '7';
	array[7] = '8';
	array[8] = '9';
	turn = 1;
	istherewinner = false;
	compmove = 0;
}

/*
int main()
{
	srand(time(NULL));
	TicTacToe a;
	a.Play();
	system("PAUSE");
}*/