#include <string>

using namespace std;

class Hangman {
public:
    Hangman(int LENOFWORD, int LENOFFILE, string display, string guesses);
    Hangman();
	void MakeDisplay();
    void GetLetter(char);
	int Play();

    int LENOFWORD;
    int LENOFFILE;
    string display;
    string guesses;
    char random_word[30];
    char master_list[100][30];
    char the_string[30];
    int random;
};