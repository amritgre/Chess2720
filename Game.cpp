#include "Game.h"


void Game::play()
{
	setup();
	while(!isOver()){
		//board->draw()


	}
}

Game::~Game(){
	delete[] board;
	delete over;
}
