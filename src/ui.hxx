

#pragma once

#include "model.hxx"

#include <ge211.hxx>



struct Ui
        : ge211::Abstract_game
{
    //
    // CONSTRUCTOR
    //

    /// Constructs a `Ui` given a reference to the model that stores the actual
    /// state of the game.
    ///
    /// The word `explicit` means that this constructor doesn't define an
    /// implicit conversion whereby you could pass a `Model` to a function that
    /// expects a `Ui` and have it work.
    explicit Ui(Model&);

    //
    // MEMBER FUNCTIONS (for the view)
    //

    /// Returns the size of the window as given by `config_.scene_dims`.
    ///
    /// (GE211 calls this to find out how big to make the window.)
    ge211::Dims<int> initial_window_dimensions() const override;

    /// Renders all the game entities to the screen. In particular,
    /// ball_sprite_ is placed at the ball's bounding box's top-left,
    /// paddle_sprite_ is placed where the model says the paddle is, and
    /// brick_sprite_ is placed for each brick in model_.bricks.
    void draw(ge211::Sprite_set&) override;

    //
    // MEMBER FUNCTIONS (for the controller)
    //

    /// Defines how the game responds to key events. There are two keys
    /// recognized:
    ///
    ///  - On 'q', quits.
    ///
    ///  - On ' ', tells the model to launch the ball.
    void on_key(ge211::Key) override;



    /// This is a reference to the model. It means that the UI doesn't
    /// own the model but has access to it. Thus, the client of the UI
    /// (brick_out.cpp) must create a `Model` first and then pass that
    /// by reference to the `Ui` constructor.
    Model& model;

    //
    // MEMBER VARIABLES (for the view)
    //


};
