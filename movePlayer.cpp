//
// Created by Ethan Milner on 9/8/22.
//
#include <iostream>
#include <string>
#include <vector>
#include "movePlayer.h"
#include "getBoard.h"
using namespace std;
int movePlayer(char direction, int xPosition)
{
int newPosition = xPosition;
        if (direction == 'a')
        {
            newPosition = newPosition - 1;
            if ((newPosition>0 && newPosition<30))
            {
                return newPosition;
            }
                return xPosition;

        }
        else if (direction == 'f')
        {
            newPosition = newPosition + 2;
            if ((newPosition>0 && newPosition<30))
            {
                return newPosition;
            }
            return xPosition;
        }
        else if (direction == 'd')
        {
            newPosition = newPosition + 1;
            if ((newPosition>0 && newPosition<30))
            {
                return newPosition;
            }
            return xPosition;
        }

        return xPosition;
}

