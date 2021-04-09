#include <iostream>
#include <string.h>

using namespace std;

class Highscore {
public:
	Highscore(string hello);
	Highscore();
	int displayScore(string hello);
	void insertHighscore();
	string hello;

};