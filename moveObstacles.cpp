//
// Created by tjem1 on 9/10/2022.
//
#include <iostream>
#include "moveObstacles.h"
#include <vector>
using namespace std;
void moveObstacles(vector<int>& obstacles)
{
    for(int i=0; i< obstacles.size();i++)
    {
        if(obstacles[i] == 1)
        {
            obstacles[i-1] = obstacles[i];
            obstacles[i] = 0;
        }
    }
}