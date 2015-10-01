#ifndef Square_h
#define Square_h

#include "Piece*.h"
#include "char.h"
#include "int.h"


class Square {

 public:

    Square(int row, int col);

    virtual char symbol();

    virtual void setPiece(Piece* p);

    virtual Piece* getPiece();

    virtual Piece* removePiece();

 public:
    Piece* piece;

};

#endif // Square_h
