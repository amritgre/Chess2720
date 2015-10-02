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

    Board(int height, int width);

    void draw(ostream* o);

    void placePiece(Piece* p, Square* s);

    void movePiece(Square* s, Square* d);

    Square* getSquare(int r, int c);

 public:
    int height;
    int width;
    vector<Square*> squares;

};

#endif // Board_h
