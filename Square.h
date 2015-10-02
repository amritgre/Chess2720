#ifndef Square_h
#define Square_h

#include "Piece.h"

class Square {

 public:

    Square(int row, int col);



    char symbol();

    void setPiece(Piece* p);

    Piece* getPiece();

    Piece* removePiece();

 public:
    Piece* piece;
    int row;
	int col;

};

#endif // Square_h
