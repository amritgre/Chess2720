#ifndef Board_h
#define Board_h

#include "Chess.h"
#include "Piece*.h"
#include "Square*.h"
#include "Square.h"
#include "int.h"
#include "ostream*.h"
#include "vector<Square*>.h"


class Board {

 public:

    Board(int len, int wid);

    virtual void draw(ostream* o);

    virtual void placePiece(Piece* p, Square* s);

    virtual void movePiece(Square* s, Square* d);

    virtual Square* getSquare(int r, int c);

 public:
    int length;
    int width;
    vector<Square*> squares;

 public:

    /**
     * @element-type Chess
     */
    Chess myChess;

    /**
     * @element-type Chess
     */
    Chess *myChess;


    /**
     * @element-type Square
     */
    Square mySquare;
};

#endif // Board_h
