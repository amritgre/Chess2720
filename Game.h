#ifndef Game_h
#define Game_h

#include "Square*.h"
#include "bool.h"
#include "istream.h"


class Game {

 public:

    virtual void play();

    virtual void setup()  = 0;

    virtual bool isOver()  = 0;

    virtual Square* getSquare(istream &is)  = 0;

    virtual bool movePiece(Square* s, Square* d);

    virtual ~Game();

 public:
    Integer newAttr;
    Integer newAttr;
};

#endif // Game_h
