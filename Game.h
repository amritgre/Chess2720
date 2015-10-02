/**
 * @author: Amrit
 * @brief: An abstraction of a board game. The game has a Board.
 */
#ifndef Game_h
#define Game_h

#include "Square.h"
#include <iostream>

class Game {

 public:

	bool over;

    Board* board;

    /***
     *
     * This method is used to start the game. The method executes until the game is over.
     * It's responsible for getting the piece's location and destination and moving the piece.
     */
    void play();

    /**
     * Setups up the board for the game.
     */
    virtual void setup()  = 0;

    /**
     * Indicates if the game is over.
     * @return bool
     */
    virtual bool isOver()  = 0;

    /**
     * reads the input stream and returns a square from the board.
     */
    virtual Square* getSquare(istream &is)  = 0;

    virtual ~Game();

};

#endif // Game_h
