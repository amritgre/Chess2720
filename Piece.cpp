/**
 * @Author: Amrit Grewal
 * @brief: This cpp file provides constructor for Piece and implements isAlive() and kill()
 */
#include "Piece.h"




Piece::Piece(string colour, char symbol)
{
	this->colour = colour;
	this->symbol = symbol;
	this->alive = true;
}

bool Piece::isAlive() const
{
    return alive;
}

void Piece::kill()
{
	this->alive = false;
}

Piece::~Piece(){
	delete alive;
	delete[] colour;
	delete symbol;

}
