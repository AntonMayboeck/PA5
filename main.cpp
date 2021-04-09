#include <iostream>

#include "tictactoe.h"
#include "snake.h"


void printPretty(int choice) {
	
	cout << "Hangman(1)" << endl;
	cout << "TicTacToe(2)" << endl;
	cout << "Snake(3)" << endl;
	cout << "Please select one of the following games: ";

	cin >> choice

}

int main() {
	TicTacToe TicTac;
	Snake Snake;

	int choice;

	while (true) {
		if (choice == 1) {
			//Play Hangman
		}
		if (choice == 2) {
			TicTac.Play()
		}
		if (choice == 3) {
			Snake.Play()
		}
	}


}