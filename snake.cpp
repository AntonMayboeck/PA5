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

Snake::Snake(int width, int height, bool gameOver, int FruitX, int FruitY, int x, int y, int score, eDirection dir, int nTail, int TailX[100], int TailY[100]){
  this->width = width;
  this->height = height;
  this->gameOver = false;
  this->x = x;
  this->y = y;
  this->FruitX = FruitX;
  this->FruitY = FruitY;
  this->score = score;
  this->dir = dir;
  this->nTail = nTail;
  this->TailX[100] = TailX[100];
  this->TailY[100] = TailY[100];
}

Snake::Snake(){}

int Snake::Endscreen() {
  initscr();
  clear();
  for(int i = 0; i < 22; i++)
        mvprintw(0,i,"+");

    char choice;
    cout << "\n\n\n\n\n\n" << endl;
    cout << "hello?";
    cin >> choice;
    if (choice == 'y') {
      return 0;
    }
    refresh();
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
    width = 20;
    height = 20;
    x = 20 / 2; // width / 2
    y = 20 / 2; // width / 2
    FruitX = (rand() % 20)+1;
    FruitY = (rand() % 20)+1;
    score = 0;
    nTail = 0;

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

  if(x > 20 || x < 1 || y < 1 || y > 20)
    gameOver = true;
  if(x == FruitX && y == FruitY)
  {
    score += 100;
    FruitX = (rand() % 20)+1;
    FruitY = (rand() % 20)+1;
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
    for(int i = 0; i < 22; i++)
        mvprintw(0,i,"+");

    for(int i = 0; i < 22; i++)
    {
        for(int j = 0; j < 22; j++)
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
    return score;
}