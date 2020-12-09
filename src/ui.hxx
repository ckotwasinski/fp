

#pragma once

#include "model.hxx"

#include <ge211.hxx>



struct Ui
        : ge211::Abstract_game
{





    /// Defines how the game responds to key events. There are two keys
    /// recognized:
    ///
    ///  - On 'q', quits.
    ///
    ///  - On ' ', tells the model to launch the ball.
    void on_key(ge211::Key) override;




    //
    // MEMBER VARIABLES (for the view)
    //


};
