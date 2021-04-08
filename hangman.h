#include <string.h>

using namespace std;

class Hangman {
public:
    Hangman(int LENOFWORD, int LENOFFILE, string display, string guesses);
    Hangman();
	void makeDisplay(char);
    void GetLetter(char, char);
	int Play();
};