#ifndef Piece_h
#define Piece_h

#include <string>

using namespace std;

class Piece {

 public:

   Piece(string colour, char symbol);

    bool isAlive();

    void kill();

    ~Piece();

 public:
    string colour;
    char symbol;
    bool alive;

};

#endif // Piece_h
