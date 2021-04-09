#include <string>
#include "tictactoe2.h"
#include "snake.h"
#include "jumble.h"
//#include "hangman.h"
using namespace std;

class Game {
    public:
        Game(toetactic *tictactoe, Snake *snake, WordJumble* hangman);
        Game();
        void mainScreen();
        //void Header();
        void firstScreen();

        Snake *snake;
        WordJumble* hangman;
        toetactic *tictactoe;
};