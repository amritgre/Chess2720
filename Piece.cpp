/**
 * @Author: Amrit Grewal
 * Description: This cpp file provides constructor for Piece and implements isAlive() and kill()
 */
#include "Piece.h"




Piece::Piece(string colour, char symbol)
{
	this->colour = colour;
	this->symbol = symbol;
	this->alive = true;
}

bool Piece::isAlive()
{
    return alive;
}

void Piece::kill()
{
	this->alive = false;
}
