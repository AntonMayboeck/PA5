#include <iostream>
#include "snake.h"
#include "tictactoe.h"
//#include "hangman.h"
#include "game.h"

Game::Game(TicTacToe *tictactoe, Snake *snake){
    //this->hangman = hangman;
    this->tictactoe = tictactoe;
    this->snake = snake;
}

Game::Game(){}

void Game::Header() {
    cout << "\n\n\n\n\n\n\n\n";
    cout << " @@@@@@@   @@@@@@  @@@@@@@@@@  @@@@@@@@  @@@@@@ @@@@@@@  @@@@@@  @@@@@@@ " << endl;
    cout << " !@@       @@!  @@@ @@! @@! @@! @@!      !@@       @@!   @@!  @@@ @@!  @@@ " << endl;
    cout << " !@! @!@!@ @!@!@!@! @!! !!@ @!@ @!!!:!    !@@!!    @!!   @!@  !@! @!@@!@! " << endl;
    cout << " :!!   !!: !!:  !!! !!:     !!: !!:          !:!   !!:   !!:  !!! !!:     " << endl;
    cout << "  :: :: :   :   : :  :      :   : :: ::: ::.: :     :     : :. :   :    " << endl;
}

void Game::firstScreen(){
    char choice;
    Header();
    cout << "\n" << "                          Ready? (y/n)                                    " << endl;
    cout << "\n\n\n";

    cin >> choice;
    if (choice == 'y') {
        mainScreen();
    } 
    else if (choice == 'n') {
        return;
    }

}

void Game::mainScreen(){
    int choice;
    cout << "                          -----------                                    " << endl;
    cout << "                          Main Screen                                    " << endl;
    cout << "                          -----------                                    " << endl;
    cout << "                         1. Tic Tac Toe                                  " << endl;
    cout << "                         2. Hangman                                      " << endl;
    cout << "                         3. Snake                                        " << endl;
    cout << "\n\n\n\n";
    cin >> choice;

    if (choice == 1) {
        TicTacToe t;
        t.Play();
    } 
    else if (choice == 2) {
        cout << "hang";
    }
    else if (choice == 3) {
        Snake s;
        s.Play();
    }

    return;
}

int main() {
    Game g;
    g.firstScreen();
    return 0;
}