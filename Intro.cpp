# Intro.cpp
%%writefile Intro.cpp
#include "Intro.h"
#include <iostream>
#include <string>
using namespace std;

void Intro :: introDisplay()
{

    cout << "Welcome To the Game!\n\n";
    cout << "This is game is story driven and the player will control a character\n";
    cout << "Throughout the game you will be opted to choose between two choices\n";
    cout << "The choices the player makes determine whether you will survive or not\n";
    cout << "Take your time and make a wise choice\n\n";
    cout << "Press (Enter) to continue\n";

};

void Intro :: gameOver()
{

  cout << " You Died..." << endl;
  cout << "Game Over!!! Restart The Game to challenge again" << endl;

};
