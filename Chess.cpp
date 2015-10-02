#include "Chess.h"




Chess::Chess()
{
	board = new Board(6,6);

	//setup white pieces
	board->placePiece(new Piece("white", "r"), board->getSquare(0,0));
	board->placePiece(new Piece("white", "b"), board->getSquare(0,1));
	board->placePiece(new Piece("white", "k"), board->getSquare(0,2));
	board->placePiece(new Piece("white", "q"), board->getSquare(0,3));
	board->placePiece(new Piece("white", "b"), board->getSquare(0,4));
	board->placePiece(new Piece("white", "r"), board->getSquare(0,5));
	board->placePiece(new Piece("white", "p"), board->getSquare(1,0));
	board->placePiece(new Piece("white", "p"), board->getSquare(1,1));
	board->placePiece(new Piece("white", "p"), board->getSquare(1,2));
	board->placePiece(new Piece("white", "p"), board->getSquare(1,3));
	board->placePiece(new Piece("white", "p"), board->getSquare(1,4));
	board->placePiece(new Piece("white", "p"), board->getSquare(1,5));

	//setup black pieces
	board->placePiece(new Piece("black", "P"), board->getSquare(4,0));
	board->placePiece(new Piece("black", "P"), board->getSquare(4,1));
	board->placePiece(new Piece("black", "P"), board->getSquare(4,2));
	board->placePiece(new Piece("black", "P"), board->getSquare(4,3));
	board->placePiece(new Piece("black", "P"), board->getSquare(4,4));
	board->placePiece(new Piece("black", "P"), board->getSquare(4,5));
	board->placePiece(new Piece("black", "R"), board->getSquare(5,0));
	board->placePiece(new Piece("black", "B"), board->getSquare(5,1));
	board->placePiece(new Piece("black", "K"), board->getSquare(5,2));
	board->placePiece(new Piece("black", "Q"), board->getSquare(5,3));
	board->placePiece(new Piece("black", "B"), board->getSquare(5,4));
	board->placePiece(new Piece("black", "R"), board->getSquare(5,5));
}

void Chess::setup()

{

}

bool Chess::isOver()
{
    return over;
}

Square* Chess::getSquare(istream &is)
{
}
