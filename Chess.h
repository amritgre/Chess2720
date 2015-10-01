#ifndef Chess_h
#define Chess_h

#include ".h"
#include "Board*.h"
#include "Board.h"
#include "Game.h"
#include "Square*.h"
#include "bool.h"
#include "istream.h"
#include "vector<Piece*>.h"

class Piece;

class Chess : public , public Game {

 public:

    Chess();

    virtual void setup();

    virtual bool isOver();

    virtual Square* getSquare(istream &is);

 public:
    Board* board;
    vector<Piece*> pieces;

 public:

    /**
     * @element-type Board
     */
    Board *myBoard;

    /**
     * @element-type Board
     */
    Board myBoard;

    /**
     * @element-type Board
     */
    Board myBoard;

    /**
     * @element-type Piece
     */
    Piece *myPiece;
};

#endif // Chess_h
