#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;
#pragma once

class TicTacToe
{

public:

	TicTacToe();
	void displayboard();
	void boardchoice(int c);
	void displayscore();
	void hrungetmove();
	void hcheckforwin();
	void crun();
	void compstrategy();
	void humanmenu();
	void hresetboard();
	void resetscores();
	int Play();


	string p1 = "";
	string p2 = "";
	int p1score = 0;
	int p2score = 0;
	int drawscore = 0;
	int menuchoice = 0;
	int boxchoice = 0;
	char p1symbol = 'X';
	char p2symbol = 'O';
	char array[9] = { '1','2','3','4','5','6','7','8','9' };
	int turn = 1; 
	bool istherewinner = false;
	int compmove = 0;
	int totalmovecounter = 0;
};