#include <iostream>
#include "snake.h"
#include "tictactoe.h"
#include "hangman.h"
#include "game.h"

Game::Game( Hangman hangman, TicTacToe tictactoe, Snake snake){
    this->hangman = hangman;
    this->tictactoe = tictactoe;
    this->snake = snake;
}

Game::Game(){}

void Game::Header() {
    cout << " @@@@@@@   @@@@@@  @@@@@@@@@@  @@@@@@@@  @@@@@@ @@@@@@@  @@@@@@  @@@@@@@ " << endl;
    cout << " !@@       @@!  @@@ @@! @@! @@! @@!      !@@       @@!   @@!  @@@ @@!  @@@ " << endl;
    cout << " !@! @!@!@ @!@!@!@! @!! !!@ @!@ @!!!:!    !@@!!    @!!   @!@  !@! @!@@!@! " << endl;
    cout << " :!!   !!: !!:  !!! !!:     !!: !!:          !:!   !!:   !!:  !!! !!:     " << endl;
    cout << "  :: :: :   :   : :  :      :   : :: ::: ::.: :     :     : :. :   :    " << endl;
}

void Game::firstScreen(){
    Header();
    
}

void Game::mainScreen(){

}
