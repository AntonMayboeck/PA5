#include <vector>
#include <algorithm>
#include <iostream>
#include <chrono>
#include "tictactoe.h"


using namespace std;

TicTacToe::TicTacToe(vector<char> matrix, char player, int tries){
	this->matrix = matrix;
	this->player = player;
	this->number = number;
}

TicTacToe::TicTacToe(){}


void TicTacToe::Draw() {
	system("cls");
	cout << "Welcome to the riveting game of Tic Tac Toe";
	cout << endl;
	for (int i = 0; i < 3; i++) {
		cout << matrix.at(i) << " ";
	}
	cout << endl;
	for (int i = 3; i < 6; i++) {
		cout << matrix.at(i) << " ";
	}
	cout << endl;
	for (int i = 6; i < 9; i++) {
		cout << matrix.at(i) << " ";
	}
}

void TicTacToe::Input(char choice)
{
	int a;
	cout << "It's " << player << " turn. " << "Press the number of the field: ";
	cin >> a;
	if (choice == '1') {
		a = rand() % 9;
	}

	if (a == 1)
	{
		if (matrix.at(0) == '1')
			matrix.at(0) = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	else if (a == 2)
	{
		if (matrix.at(1) == '2')
			matrix.at(1) = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	else if (a == 3)
	{
		if (matrix.at(2) == '3')
			matrix.at(2) = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	else if (a == 4)
	{
		if (matrix.at(3) == '4')
			matrix.at(3) = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	else if (a == 5)
	{
		if (matrix.at(4) == '5')
			matrix.at(4) = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	else if (a == 6)
	{
		if (matrix.at(5) == '6')
			matrix.at(5) = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	else if (a == 7)
	{
		if (matrix.at(6) == '7')
			matrix.at(6) = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	else if (a == 8)
	{
		if (matrix.at(7) == '8')
			matrix.at(7) = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	else if (a == 9)
	{
		if (matrix.at(8) == '9')
			matrix.at(8) = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}

}
void TicTacToe::TogglePlayer()
{

	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}

char TicTacToe::Win() {
	//first player

	/*for (int i = 0; i < 9; i + 3) {
		if (matrix.at(i) == 'X' && matrix.at(i + 1) == 'X' && matrix.at(i + 2) == 'X') {
			return 'X';
		}
	}
	for (int i = 0; i < 3; i++) {
		if (matrix.at(i) == 'X' && matrix.at(i + 3) == 'X' && matrix.at(i + 6) == 'X') {
			return 'X';
		}
	}
	if (matrix.at(0) == 'X' && matrix.at(1) == 'X' && matrix.at(2) == 'X')
		return 'X';
	if (matrix.at(0) == 'X' && matrix.at(1) == 'X' && matrix.at(2) == 'X')
		return 'X';

	for (int i = 0; i < 9; i + 3) {
		if (matrix.at(i) == 'O' && matrix.at(i + 1) == 'O' && matrix.at(i + 2) == 'O') {
			return 'O';
		}
	}
	for (int i = 0; i < 3; i++) {
		if (matrix.at(i) == 'O' && matrix.at(i + 3) == 'O' && matrix.at(i + 6) == 'O') {
			return 'X';
		}
	}
	if (matrix.at(0) == 'O' && matrix.at(1) == 'O' && matrix.at(2) == 'O')
		return 'O';
	if (matrix.at(0) == 'O' && matrix.at(1) == 'O' && matrix.at(2) == 'O')
		return 'O';*/
	if (matrix.at(0) == 'X' && matrix.at(1) == 'X' && matrix.at(2) == 'X')
		return 'X';
	else if (matrix.at(3) == 'X' && matrix.at(4) == 'X' && matrix.at(5) == 'X')
		return 'X';
	else if (matrix.at(6) == 'X' && matrix.at(7) == 'X' && matrix.at(8) == 'X')
		return 'X';

	else if (matrix.at(0) == 'X' && matrix.at(3) == 'X' && matrix.at(6) == 'X')
		return 'X';
	else if (matrix.at(1) == 'X' && matrix.at(4) == 'X' && matrix.at(7) == 'X')
		return 'X';
	else if (matrix.at(2) == 'X' && matrix.at(5) == 'X' && matrix.at(8) == 'X')
		return 'X';

	else if (matrix.at(0) == 'X' && matrix.at(4) == 'X' && matrix.at(8) == 'X')
		return 'X';
	else if (matrix.at(2) == 'X' && matrix.at(4) == 'X' && matrix.at(6) == 'X')
		return 'X';


	//second player
	else if (matrix.at(0) == '0' && matrix.at(1) == '0' && matrix.at(2) == '0')
		return '0';
	else if (matrix.at(3) == 'O' && matrix.at(4) == 'O' && matrix.at(5) == '0')
		return '0';
	else if (matrix.at(6) == '0' && matrix.at(7) == '0' && matrix.at(8) == '0')
		return '0';

	else if (matrix.at(0) == '0' && matrix.at(3) == '0' && matrix.at(6) == '0')
		return '0';
	else if (matrix.at(1) == '0' && matrix.at(4) == '0' && matrix.at(7) == '0')
		return '0';
	else if (matrix.at(2) == '0' && matrix.at(5) == '0' && matrix.at(8) == '0')
		return '0';

	else if (matrix.at(0) == '0' && matrix.at(4) == '0' && matrix.at(8) == '0')
		return '0';
	else if (matrix.at(2) == '0' && matrix.at(4) == '0' && matrix.at(6) == '0')
		return '0';

	return '/';
}

int TicTacToe::Play() {
	TicTacToe TicTac;

	srand(std::chrono::milliseconds());

	TicTac.matrix = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	TicTac.number = 0;
	char choice;

	TicTac.player = 'X';

	cout << "One player(1)" << endl;
	cout << "Two player(2)" << endl;

	cin >> choice;

	//TicTac.Init();
	TicTac.Draw();
	while (true)
	{
		TicTac.number++;
		TicTac.Input(choice);
		TicTac.Draw();
		if (TicTac.Win() == 'X')
		{
			cout << "X wins!" << endl;
			break;
		}
		else if (TicTac.Win() == 'O')
		{
			cout << "O wins!" << endl;
			break;
		}
		else if (TicTac.Win() == '/' && TicTac.number == 9)
		{
			cout << "It's a draw!" << endl;
			break;
		}
		TicTac.TogglePlayer();
	}
	system("pause");
	return 0;
}
int main(){
	TicTacToe Tic;
	Tic.Play();
}