//
// Created by Conor Kotwasinski on 12/9/20.
//


void Logic()
{
    int prevX = main.tailX[0];
    int prevY = main.tailY[0];
    int prev2X, prev2Y;
    main.tailX[0] =x;
    main.tailY[0] = y;
    for (int i = 1; i <main.nTail; i++)
    {
        prev2X = main.tailX[i];
        prev2Y = main.tailY[i];
        int prevX = prev2X;
        int prevY = prev2Y;
    }
    switch (ui.dir)
    {
    case LEFT:
        main.x--;
        break;
    case RIGHT:
        main.x++;
        break;
    case UP:
        main.y++;
        break;
    case DOWN:
        main.y--;
        break;
    default:
        break;
    }
    if (main.x > width || main.x < 0 || main.y > main.height || main.y < 0)
        main.gameOver = true;
    for (int i =0; i < nTail; i++)
        if (main.tailX[i] == main.x && main.tailY[i] == main.y)
            gameOver = true;
    if (main.x == main.fruitX && main.y == main.fruitY)
    {
        main.score += 10;
        main.fruitX = rand() % main.width;
        main.fruitY = rand() % main.height;
        main.nTail++;
    }
}