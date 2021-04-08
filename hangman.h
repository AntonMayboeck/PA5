#include <string>

using namespace std;

class Hangman {
public:
    Hangman(char display, char guess);
    Hangman();
	void MakeDisplay();
    void GetLetter(char);
	int Play();

    string display;
    char guess;
    char random_word[30];
    char master_list[100][30];
    char the_string[30];
    int random;
};