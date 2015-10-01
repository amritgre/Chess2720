#ifndef Piece_h
#define Piece_h

#include "bool.h"
#include "char.h"


class Piece {

 public:

    Piece(String colour, char symbol);

    virtual bool isAlive();

    virtual void kill();

 public:
    String colour;
    char symbol;

};

#endif // Piece_h
