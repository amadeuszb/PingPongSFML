#include "Game.h"



Game::Game(unsigned x = 800, unsigned y = 600) : resX(x), resY(y), window(VideoMode(resX, resY), "Amadeusz PingPong"), menu(resX,resY)
{
	
}

void Game::playGame() {
	menu.displayMenu(window);
}



Game::~Game()
{
}
