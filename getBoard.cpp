//
// Created by Ethan Milner on 9/8/22.
//
#include <iostream>
#include <string>
#include <vector>
#include "getBoard.h"
using namespace std;

string getBoard(int playerXPosition, vector<int>& obstacles)
{
    string board;
    board = "B";
    for(int i=0; i<29;i++)
    {
     if(playerXPosition == i)
     {
         board+= "P";
     }
     if(obstacles[i] == 1)
     {
         board+= "0";
     }
     else
     {
         board+= " ";
     }
    }
    board+= "E\n";
    for(int i=0; i<32;i++)
    {
        board += "X";
    }
    board+="\n";
    return board;
}