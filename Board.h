/**
 * @author: Amrit
 * @brief: An abstraction of a two-dimensional board. The board is made of squares.
 */
#ifndef Board_h
#define Board_h

#include "Chess.h"
#include "Piece.h"
#include "Square.h"
#include <iostream>
#include <vector>

using namespace std;

class Board {

 public:

	/**
	 *	Constructor: takes two parameters – width and height – for specifying the size of the board.
	 */
    Board(int height, int width);

    /**
     * Draws the board to an output stream
     */
    void draw(ostream* o);

    /**
     * Places a Piece on a Square
     */
    void placePiece(Piece* p, Square* s);

    /**
     * Moves the Piece on Square s to Square d
     */
    void movePiece(Square* s, Square* d);

    Square* getSquare(int r, int c);

    ~Board();

 public:
    int height;
    int width;
    vector<Square*> squares;

};

#endif // Board_h
