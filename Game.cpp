#include "Game.h"


void Game::play()
{
	setup();
	while(!isOver()){
		board->draw(std::cout);
		Square* toMove = getSquare(std::cin);//how do you pass in this stream?
		Square* dest = getSquare(std::cin);
		board->movePiece(toMove, dest);

	}
}

Game::~Game(){
	delete[] board;
}
