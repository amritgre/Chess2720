#include "Square.h"




Square::Square(int row, int col)
{
    this->row = row;
    this->col = col;
}


char Square::symbol()
{
    return this->piece->symbol;
}

void Square::setPiece(Piece* p)
{
	this->piece = p;
}

Piece* Square::getPiece()
{
	return this->piece;
}

Piece* Square::removePiece()
{
	Piece* tempP = this->piece;
	this->piece = NULL;
	return tempP;
}
