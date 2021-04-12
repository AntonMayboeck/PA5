#include <string>
#include "tictactoe2.h"
#include "snake.h"
#include "jumble.h"
//#include "hangman.h"
using namespace std;

class Game {
    public:
        Game(TicTacToe* tictactoe, WordJumble* hangman, Snake* snake);
        Game();
        void mainScreen();
        //void Header();
        void firstScreen();

        //Snake *snake;
        WordJumble* hangman;
        TicTacToe *tictactoe;
};