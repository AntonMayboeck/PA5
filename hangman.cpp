#include <iostream>
#include <fstream>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include "hangman.h"

using namespace std;

Hangman::Hangman(char display, char guess){
    this->display = display;
    this->guess = guess;
}

Hangman::Hangman(){}

//makes the dashes for the display
void Hangman::MakeDisplay() {
    string randomWord = master_list[random];
    display = "";
    for (int i = 0; i < randomWord.length() ;i++)
        display = display + "_ ";
}

//void Hangman::MakeDisplay() {
//    string randomWord = master_list[random];
//
//    for (int i = 0; i < randomWord.length(); i++) {
//        char display[i] = {"_"};
//        cout << display[i] << " " << endl;
//    }
//}

void Hangman::GetLetter() {
    int len = strlen(random_word);
    guess;
    for (int i = 0; i < len; i++){
        if (guess == random_word[i]) {
            
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

    int counter = 0;


    //puts all of the words into the master_list
    while (!fin.eof()) {
        fin >> the_string;
        strcpy(master_list[counter], the_string);
        counter++;
    }
    fin.close();

    // randomly select a word from master_list
    random = rand() % 101;
    strcpy(this->random_word,this-> master_list[random]);

    cout << master_list[random] << endl;
    MakeDisplay();

    cout << "Let's play a game of hangman!!!!!" << endl;
    cout << display << endl;
    cout << "\n\nGuess a letter: "; 
    cin >> guess;
}

int main(){
	Hangman Man;
	Man.Play();
}