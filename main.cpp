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
	int TotalScore;
	int tempScore;

	char choice;

	while (true) {
		printPretty(choice);
		if (choice == '1') {
			tempScore = Hang.Play();
			TotalScore += tempScore;
			tempScore = 0;
			//Play Hangman
		}
		if (choice == '2') {
			tempScore = TicTac.Play();
			TotalScore += tempScore;
			tempScore = 0;

		}
		if (choice == '3') {
			tempScore = Snake.Play();
			TotalScore += tempScore;
			tempScore = 0;
		}
	}

	return 0;
}