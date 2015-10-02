/**
 * @author: Amrit
 * @brief: A class that provides the implementation of the abstract
 * (i.e. virtual) class of Game. It contains the Pieces of the game.
 */
#ifndef Chess_h
#define Chess_h

#include "Board.h"
#include "Game.h"
#include "Square.h"
#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

class Chess : public Game {

 public:

	/**
	 * Constructor: Creates a 6x6 chess board and the pieces.
	 */
    Chess();

    /**
     * Overrides the setup() function from Game to populate the board with the pieces.
     */
    void setup();

    /**
     * Overrides the isOver() function from Game to indicate that the game ends when one of the King pieces is taken.
     */
    bool isOver();

    /**
     * Reads the row and column for a location on the board.
     * The row and column values are separated by a space on one line.
     */
    Square* getSquare(istream &is);

 private:

    vector<Piece*> pieces;

};

#endif // Chess_h
