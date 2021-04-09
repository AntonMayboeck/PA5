#include <vector>
#include <algorithm>
#include <iostream>
#include <chrono>
#include <set>
#include <cstdlib>
#include <ncurses.h>
#include "snake.h"
#include <iostream> 
#include <cstdlib>
#include <ncurses.h>


using namespace std;

Snake::Snake(int width, int height, bool gameOver, int FruitX, int FruitY, int x, int y, int score, eDirection dir){
  this->width = width;
  this->height = height;
  this->gameOver = gameOver;
  this->x = x;
  this->y = y;
  this->FruitX = FruitX;
  this->FruitY = FruitY;
  this->score = score;
  this->dir = dir;
}

Snake::Snake(){}

int Snake::Endscreen() {
  return 0;
}

void Snake::Setup(){
    initscr();
    clear();
    noecho();
    cbreak();
    curs_set(0);
    gameOver = false;
    enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
    eDirection dir;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    FruitX = (rand() % width)+1;
    FruitY = (rand() % height)+1;
    score = 0;
}
void Snake::Input(){
    keypad(stdscr, true);
  halfdelay(1);
  int c = getch();
  switch(c)
  {
    case KEY_LEFT:
      dir = LEFT;
      break;
    case KEY_RIGHT:
      dir = RIGHT;
      break;
    case KEY_UP:
      dir = UP;
      break;
    case KEY_DOWN:
      dir = DOWN;
      break;
    case 'Q':
      gameOver = true;
      break;
  }
}
void Snake::Logic(){
      int prevX = TailX[0];
  int prevY = TailY[0];
  int prev2X, prev2Y;
  TailX[0] = x;
  TailY[0] = y;

  for (int i = 1; i < nTail; i++)

  {
    prev2X = TailX[i];
    prev2Y = TailY[i];
    TailX[i] = prevX;
    TailY[i] = prevY;
    prevX = prev2X;
    prevY = prev2Y;
  }

  switch(dir)
  {
    case LEFT:
      x--;
      break;
    case RIGHT:
      x++;
      break;
    case UP:
      y--;
      break;
    case DOWN:
      y++;
      break;
    default:
      break;
  }

  if(x > width || x < 1 || y < 1 || y > height)
    gameOver = true;
  if(x == FruitX && y == FruitY)
  {
    score++;
    FruitX = (rand() % width)+1;
    FruitY = (rand() % height)+1;
    nTail++;
  }

  for (int i = 0; i < nTail; i++)
    if (TailX[i] == x && TailY[i] == y)
    {
      gameOver = true;
    }
}

void Snake::Draw(){
    clear();
    for(int i = 0; i < width+2; i++)
        mvprintw(0,i,"+");

    for(int i = 0; i < height+2; i++)
    {
        for(int j = 0; j < width+2; j++)
        {
            if (i == 0 || i == 21)
                mvprintw(i, j, "+");
            else if (j == 0 || j == 21)
                mvprintw(i, j, "+");
            else if (i == y && j == x)
                mvprintw(i, j, "O");
            else if(i == FruitY && j == FruitX)
                mvprintw(i, j, "Q");
            else
            {
              for(int k = 0; k < nTail; k++)
              {
                if (TailX[k] == j && TailY[k] == i)
                {
                  mvprintw(i, j, "o");
                }
              }
            }      
        }
    }
    mvprintw(23, 0, "Score %d", score);
    refresh();
}

int Snake::Play(){
    Setup();
    Draw();
    
    while(!gameOver) {
        Draw();
        Input();
        Logic();
    }
    Endscreen();

    getch();
    endwin();
    return 0;
}