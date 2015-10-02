/**
 * @Author: Amrit Grewal
 * @brief: This header file defines a piece that will be used in chess game.
 */
#ifndef Piece_h
#define Piece_h

#include <string>

using namespace std;

class Piece {

 public:

	/**
	 * Didn't include the variable alive in the constructor since everything
	 * at the beginning of the game will be alive when pieces are created.
	 */
    Piece(string colour, char symbol);

	/**
	 * Returns true if the piece is still active on the board, false otherwise
	 */
    bool isAlive() const;

    /**
     * sets the piece to be inactive on the board
     */
    void kill();

    ~Piece();

 public:
    string colour;
    char symbol;//For example: 'q' for queen and 'p' for pawn. Lowercase = white pieces & Upper case = black pieces
    bool alive;

};

#endif // Piece_h
