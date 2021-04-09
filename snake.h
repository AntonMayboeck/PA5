#include <string>

using namespace std;

#pragma once

class Snake {
public:
    Snake();
	void Setup();
    void Input();
	void Logic();
    void Draw();
    int Play();

    bool gameOver;
    int width;
    int height;
    int x;
    int y;
    int FruitX;
    int FruitY;
    int score;
    //enum eDirection; // {STOP, RIGHT, LEFT, DOWN}
    int TailX[100];
    int TailY[100];
    int nTail;
};
