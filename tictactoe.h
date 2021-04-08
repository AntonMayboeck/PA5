#include <vector>
#include <algorithm>


#pragma once

using namespace std;

class TicTacToe {
public:
	TicTacToe(vector<char> matrix, char player, int number, int choice);
	TicTacToe();
	void Init();
	void Draw();
	void TogglePlayer();
	void Input(int choice);
	char Win();
	int Play();
	int calculateScore();

	vector<char> matrix;
	char player;
	int number;
	int choice;
};