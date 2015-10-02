/**
 * @author: Amrit
 * @brief: Square is a location on the board that can contain a Piece and its location info ie. row and column.
 */

#ifndef Square_h
#define Square_h

#include "Piece.h"

class Square {

 public:

	/**
	 * Constructor: takes two parameters – row and column – for specifying the location of the square on the board.
	 */
    Square(int row, int col);

    /**
     * Returns the symbol of the piece on the square, or a symbol indicating an empty square (“.”).
     */
    char symbol();

    /**
     * Sets a piece on the square
     */
    void setPiece(Piece* p);

    /**
     * Returns the piece on the square, if it exists, otherwise returns NULL;
     */
    Piece* getPiece();

    /**
     * Removes a piece from a square and returns it, if it exists.
     */
    Piece* removePiece();

 public:
    Piece* piece;//Null if nothing is on the square
    int row;
	int col;

};

#endif // Square_h
