
#include <iostream>

using namespace std;
bool gameOver;
const int width = 20;
const int height = 20;

int x,y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;



int main()
{
    Setup();
    ui.run();
    while(!gameOver)
    {
        draw.Draw();

        logic.Logic();
        //sleep(10);
    }
}
