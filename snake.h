#include <string>

using namespace std;

#pragma once

class Snake {
public:
enum eDirection
   {
      STOP=0,
      LEFT,
      RIGHT,
      UP,
      DOWN
   };

    Snake(int width, int height, bool gameOver, int FruitX, int FruitY, int x, int y, int score, eDirection dir);
    Snake();
	void Setup();
    void Input();
	void Logic();
    void Draw();
    int Play();
    int Endscreen();

    bool gameOver;
    int width;
    int height;
    int x;
    int y;
    int FruitX;
    int FruitY;
    int score;
    int TailX[100];
    int TailY[100];
    int nTail;
    eDirection dir;
};
