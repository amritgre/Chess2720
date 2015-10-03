#include "Board.h"


Board::Board(int height, int width)
{
    this->width = width;
    this->height = height;

    //Loop through and make squares vector of size 36 ie. 6 rows x 6 cols
	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			Square* tempSqr = new Square(row, col);
			squares.push_back(tempSqr);
		}
    }
}


void Board::draw(ostream& o){

	o << " "; //the initial empty corner on the top left(check the word file if unclear)

	//Print just the column line
   for (int col = 1; col < this->width; col++)
	{
		o << " " << col;
	}

	o << endl;//end of the column line and move to rows

	//Prints row 0 to 5
    for (int row = 1; row < this->height; row++) {

       o << " " << row << " ";//Prints the row num

	  //This loop gets all the things on that line
		for(int col2 = 0; col2 < this->width; col2++){
			o << getSquare(row, col2)->symbol() << " ";

		}

	}

	 // goto new row.
	 o << endl;

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
