#ifndef Game_h
#define Game_h

#include "Square.h"
#include <iostream>

class Game {

 public:

	bool over;

    Board* board;

    void play();

    virtual void setup()  = 0;

    virtual bool isOver()  = 0;

    virtual Square* getSquare(istream &is)  = 0;

    virtual ~Game();

};

#endif // Game_h
