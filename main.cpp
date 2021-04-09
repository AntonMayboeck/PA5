#include <iostream>

#include "tictactoe.h"
#include "snake.h"
#include "hangman.h"
//#include "highscore.h"


void printPretty(int choice) {
	
	cout << "Hangman(1)" << endl;
	cout << "TicTacToe(2)" << endl;
	cout << "Snake(3)" << endl;
	cout << "Please select one of the following games: ";

	cin >> choice;

}

int main() {
	TicTacToe TicTac;
	Snake Snake;
	Hangman Hang;

	char choice;

	while (true) {
		printPretty(choice);
		if (choice == '1') {
			Hang.Play();
			//Play Hangman
		}
		if (choice == '2') {
			TicTac.Play();
		}
		if (choice == '3') {
			Snake.Play();
		}
	}

	return 0;
}