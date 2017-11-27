#pragma once
#include<SFML\Graphics.hpp>
#include<SFML\Window.hpp>

using namespace sf;

class Menu
{
public:
	Menu(unsigned, unsigned);
	~Menu();
	void displayMenu(RenderWindow& window);
private:
	unsigned resX, resY;
	Sprite background;
	Texture backgroundTexture;

	
};

