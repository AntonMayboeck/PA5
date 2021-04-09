#include <string>

using namespace std;

class Snake {
public:
    Snake();
    Snake();
	void Setup();
    void Input();
	void Logic();
    int Play();

    bool gameOver;
    int width;
    int height;
    int x;
    int y;
    int FruitX;
    int FruitY;
    int score;
    enum eDirection; // {STOP, RIGHT, LEFT, DOWN}
    int TailX[100];
    int TailY[100];
    int nTail;
};
