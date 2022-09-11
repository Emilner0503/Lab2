#include <iostream>
#include "getBoard.h"
#include "movePlayer.h"
#include "moveObstacles.h"
#include <string>
#include <vector>
using namespace std;

int main() {
    char direction;
    int position = 1;
    bool end = true;
    bool wrong;
    vector<int> obstacles;
    obstacles.resize(28);
    int counter = 3;
    while(end)
    {
        if (counter == 3)
        {
            obstacles[28] = 1;
            counter = 0;
        }
        else
        {
            obstacles[28] = 0;
        }

        if (!(position == 29))
        {


            wrong = true;
            cout << getBoard(position,obstacles) + "\n";
            cout << position << "Enter the direction --> ";
            while (wrong) {
                cin >> direction;
                if (direction == 'a' || direction == 'd' || direction == 'f') {
                    wrong = false;
                } else {
                    cout << "Please enter a valid input ( d/f/a )\n";
                }

            }
            position = movePlayer(direction, position);
            moveObstacles(obstacles);
        }
        else
        {
            cout << getBoard(position,obstacles) + "\n";
            cout << "You Win";
            end = false;
        }
        counter++;
    }
return 0;
}
