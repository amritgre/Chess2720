#include "Board.h"


Board::Board(int height, int width)
{
    this->width = width;
    this->height = height;

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			Square* tempSqr = new Square(row, col);
			squares.push_back(tempSqr);
		}
    }
}
void Board::draw(ostream &o)

{
    for (int row = 0; row < this -> height; row++) {
       o << "#";
       for (int column; column < this -> width; column++) {
         o << "#";
         o << endl;
      }
    }
}

void Board::placePiece(Piece* p, Square* s)
{
    s -> setPiece(p);

}

void Board::movePiece(Square* s, Square* d)
{
    // TODO: Use assert() to verify that a piece exists on s.
    d -> setPiece (s -> getPiece());
    s -> removePiece();
}

Square* Board::getSquare(int r, int c)
{
	Square* toReturn;
	for(int i = 0; i < squares.size(); i++){
		if(squares.at(i)->row == r && squares.at(i)->col == c)
			toReturn = squares.at(i);
	}

	return toReturn;
}

Board::~Board(){
	for(int i = 0; i < squares.size(); i++){
		delete squares[i];
	}
}
