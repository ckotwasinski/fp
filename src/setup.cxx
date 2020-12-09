//
// Created by Conor Kotwasinski on 12/9/20.
//


void Setup()
{
    main.gameOver = false;
    ui.dir = STOP;
    main.x = main.width/2;
    main.y = main.height/2;
    main.fruitX = rand() % main.width;
    main.fruitY = rand() % main.height;
}