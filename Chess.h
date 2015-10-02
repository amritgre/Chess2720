#ifndef Chess_h
#define Chess_h

#include "Board.h"
#include "Game.h"
#include "Square.h"
#include <iostream>
#include <vector>

using namespace std;

class Chess : public Game {

 public:

    Chess();

    void setup();

    bool isOver();

    Square* getSquare(istream &is);

 private:
    Board* board;
    vector<Piece*> pieces;

};

#endif // Chess_h
