//
// Created by Conor Kotwasinski on 12/9/20.
//

void Draw()
{
    if (std::system( "cls" )) std::system( "clear" );
    for (int i =0; i < main.width+2; i++;)
    cout << "#";
    cout << endl;

    for (int i = 0; i < main.height; i++)
    {
        for (int j = 0; j < main.width; j++)
        {
            if(j == 0)
                cout << "#";
            if (i == y && j == x)
            {
                cout << "O";
            }
            else if (i == main.fruitY && j == main.fruitX)
                cout << "F";

            bool print = false;
            for (int k = 0; k < main.nTail; k++)
            {

                if (main.tailX[k] == j && main.tailY[k] == i)
                {
                    cout << "o";
                    print = true;
                }

            }
            if (!print)
                cout << " ";

            if (j == width-1)
                cout << "#";
        }
        cout << endl;
    }

    for (int i =0; i < main.width+2; i++)
        cout << "#";
    cout << endl;
    cout << "Score: " << main.score << endl;
}
