#include<SFML\Graphics.hpp>
#include<SFML\Window.hpp>
#include"Menu.h"
using namespace sf;

class Game
{
public:
	Game(unsigned, unsigned);
	~Game();
	void playGame();
private:
	unsigned resX, resY;
	int amountOfballs;
	RenderWindow window;
	Menu menu;
};
