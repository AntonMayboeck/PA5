#include <iostream>
#include <fstream>
#include <string>

#include "highscore.h"

using namespace std;

Highscore::Highscore(string bye) {
	this->hello = bye;
}

Highscore::Highscore(){}

int Highscore::displayScore(string textfile) {
	string line;
	textfile.append(".txt");
	ifstream help(textfile);
	if (help.is_open()) {
		while (getline(help, line))
		{
			cout << line << '\n';
		}
		help.close();
	}

	else cout << "Unable to open file";

	return 0;
}

//void Highscore::insertHighscore(string textfile) {
//
//}

int main() {
	Highscore hugh;

	string hello = "hangman";

	hugh.displayScore(hello);
}