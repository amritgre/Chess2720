
#include "Square.h"

Square::Square(int row, int col)
{
    this->row = row;
    this->col = col;
}


char Square::symbol() const
{
	if(this->piece == NULL)
		return '.';
	else
		return this->piece->symbol;
}

void Square::setPiece(Piece* p)
{
	this->piece = p;
}

Piece* Square::getPiece() const
{
	return this->piece;
}

Piece* Square::removePiece()
{
	Piece* tempP = this->piece;
	this->piece = NULL;
	return tempP;
}

Square::~Square(){
	delete[] piece;
}

