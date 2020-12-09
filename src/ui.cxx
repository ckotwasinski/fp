

#include "ui.hxx"

enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;


// You can get a `Key` representing space with `ge211::Key::code(' ')`.
void
Ui::on_key(ge211::Key key)
{
    if (key == ge211::Key::code('q')) {
        main.gameOver=true;
    }

    if (key == ge211::Key::code('w')) {
        dir = UP;
    }

    if (key == ge211::Key::code('a')) {
        dir = LEFT;;
    }

    if (key == ge211::Key::code('s')) {
        dir = DOWN;
    }

    if (key == ge211::Key::code('d')) {
        dir = RIGHT;
    }
}


