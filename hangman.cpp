#include <iostream>
#include <fstream>
#include <string.h>
#include <ctime>
#include <cstdlib>


using namespace std;

int LENOFWORD = 20;
int LENOFFILE = 100;
string alphabet="a b c d e f g h i j k l m n o p q r s t u v w x y z";
string display;

//makes the dashes for the display
void makeDisplay(char *word) {
    display = "";
    for (int i=0;i<strlen(word);i++)
        display = display + "_ ";
}

void getLetter(char *word, char guess) {
    int len = strlen(word);
    for (int i = 0; i < len; i++)
    {
    }
}

int main() {
    srand(time(NULL)); //makes sure you get a new random word each time
    ofstream fout;
    ifstream fin;

    //open the file that has the words
    fin.open("words.fic", ios::binary | ios::in);

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
    cout << display << endl;
}