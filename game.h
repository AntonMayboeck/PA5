#include <string>
#include "tictactoe.h"
#include "snake.h"
//#include "hangman.h"
using namespace std;

class Game {
    public:
        Game(int score, Snake *snake);
        Game();
        void mainScreen();
        void Header();
        void firstScreen();

        Snake *snake;
        int score;

        //Hangman hangman;
};