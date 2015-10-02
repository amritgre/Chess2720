#include "Chess.h"




Chess::Chess()
{
	board = new Board(6,6);

	//create white pieces
	/**alternative maybe
	 * char charPieces [] = {'r','b','k','q','b','r','p','p','p','p','p','p'};
	 * pieces(charPieces, charPieces + sizeof(charPieces) / sizeof(char));
	 */
	pieces.push_back(new Piece('white', 'r'));
	pieces.push_back(new Piece('white', 'b'));
	pieces.push_back(new Piece('white', 'k'));
	pieces.push_back(new Piece('white', 'q'));
	pieces.push_back(new Piece('white', 'b'));
	pieces.push_back(new Piece('white', 'r'));
	pieces.push_back(new Piece('white', 'p'));
	pieces.push_back(new Piece('white', 'p'));
	pieces.push_back(new Piece('white', 'p'));
	pieces.push_back(new Piece('white', 'p'));
	pieces.push_back(new Piece('white', 'p'));
	pieces.push_back(new Piece('white', 'p'));


	//setup black pieces
	pieces.push_back(new Piece('black', 'P'));
	pieces.push_back(new Piece('black', 'P'));
	pieces.push_back(new Piece('black', 'P'));
	pieces.push_back(new Piece('black', 'P'));
	pieces.push_back(new Piece('black', 'P'));
	pieces.push_back(new Piece('black', 'P'));
	pieces.push_back(new Piece('black', 'R'));
	pieces.push_back(new Piece('black', 'B'));
	pieces.push_back(new Piece('black', 'K'));
	pieces.push_back(new Piece('black', 'Q'));
	pieces.push_back(new Piece('black', 'B'));
	pieces.push_back(new Piece('black', 'R'));



}

void Chess::setup()

{
	//setup white pieces
	board->placePiece(pieces.at(0), board->getSquare(0,0));
	board->placePiece(pieces.at(1), board->getSquare(0,1));
	board->placePiece(pieces.at(2), board->getSquare(0,2));
	board->placePiece(pieces.at(3), board->getSquare(0,3));
	board->placePiece(pieces.at(4), board->getSquare(0,4));
	board->placePiece(pieces.at(5), board->getSquare(0,5));
	board->placePiece(pieces.at(6), board->getSquare(1,0));
	board->placePiece(pieces.at(7), board->getSquare(1,1));
	board->placePiece(pieces.at(8), board->getSquare(1,2));
	board->placePiece(pieces.at(9), board->getSquare(1,3));
	board->placePiece(pieces.at(10), board->getSquare(1,4));
	board->placePiece(pieces.at(11), board->getSquare(1,5));

	//setup black pieces
	board->placePiece(pieces.at(12), board->getSquare(4,0));
	board->placePiece(pieces.at(13), board->getSquare(4,1));
	board->placePiece(pieces.at(14), board->getSquare(4,2));
	board->placePiece(pieces.at(15), board->getSquare(4,3));
	board->placePiece(pieces.at(16), board->getSquare(4,4));
	board->placePiece(pieces.at(17), board->getSquare(4,5));
	board->placePiece(pieces.at(18), board->getSquare(5,0));
	board->placePiece(pieces.at(19), board->getSquare(5,1));
	board->placePiece(pieces.at(20), board->getSquare(5,2));
	board->placePiece(pieces.at(21), board->getSquare(5,3));
	board->placePiece(pieces.at(22), board->getSquare(5,4));
	board->placePiece(pieces.at(23), board->getSquare(5,5));
}

bool Chess::isOver()
{
    return over;
}

Square* Chess::getSquare(istream &is)
{
	//TODO: DO NOT output prompts here
//	string row;
//	string col;
//
//	cout << "Please enter row: ";
//	getline(is, row);
//
//	cout << endl << "Please enter column: ";
//	getline(is, col);
//
//	return board->getSquare(atoi(row.c_str()), atoi(col.c_str()));

}

Chess::~~Chess(){
	delete[] pieces;
}
