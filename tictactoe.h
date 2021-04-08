#include <vector>
#include <algorithm>


#pragma once

using namespace std;

class TicTacToe {
public:
	TicTacToe(vector<char> matrix, char player, int number);
	TicTacToe();
	void Init();
	void Draw();
	void TogglePlayer();
	void Input(char);
	char Win();
	int Play();

	vector<char> matrix;
	char player;
	int number;
};