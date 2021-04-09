#include <string>
#include "tictactoe.h"
#include "snake.h"
#include "hangman.h"
using namespace std;

class Game {
public:
    Game( Hangman hangman, TicTacToe tictactoe, Snake snake);
    Game();
	void mainScreen();
    void Header();
};