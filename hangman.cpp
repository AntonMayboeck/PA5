#include <iostream>
#include <fstream>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include "hangman.h"


using namespace std;
Hangman::Hangman(int LENOFWORD, int LENOFFILE, string display, string guesses){
	this->LENOFWORD = LENOFWORD;
	this->LENOFFILE = LENOFFILE;
    this->display = display;
    this->guesses = guesses;
}

Hangman::Hangman(){}

//makes the dashes for the display
void Hangman::MakeDisplay(char *word) {
    display = "";
    for (int i=0;i<strlen(word);i++)
        display = display + "_ ";
}

void Hangman::GetLetter(char *word, char guess) {
    int len = strlen(word);
    for (int i = 0; i < len; i++)
    {
        if (guess == word[i]) {
            
        }
    }
}

int Hangman::Play() {
    Hangman Hang;

    srand(time(NULL)); //makes sure you get a new random word each time
    ofstream fout;
    ifstream fin;

    //open the file that has the words
    fin.open("words.fic", ios::binary | ios::in);

    LENOFWORD = 20;
    LENOFFILE = 100;

    char the_string[LENOFWORD]; //the string in the file
    char master_list[LENOFFILE][LENOFWORD]; //masterlist which includes all of the words
    int counter = 0;
    char random_word[LENOFWORD];

    //puts all of the words into the master_list
    while (!fin.eof()) {
        fin >> the_string;
        strcpy(master_list[counter], the_string);
        counter++;
    }
    fin.close();

    // randomly select a word from master_list
    int random = rand() % 101;
    strcpy(random_word, master_list[random]);

    cout << master_list[random] << endl;
    makeDisplay(master_list[random]);

    cout << "Let's play a game of hangman!!!!!" << endl;
    cout << display << endl;
}