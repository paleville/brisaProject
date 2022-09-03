#include "level1.h"

level1::level1(sf::RenderWindow* window, std::stack<stateClass*>* states)
	: stateClass(window, states)
{
	this->initTextures();
	this->initPLayers();
}

level1::~level1()
{
	delete this->player;
}


void level1::endState()
{
	std::cout << "Ending Level1!" << "\n";
}

void level1::updateKeyBinds(const float& dt)
{
	this->checkforQuit();
}

void level1::update(const float& dt)
{
	this->updateKeyBinds(dt);	
	static_cast<entityClass*>(player)->update(dt);

}

void level1::render(sf::RenderTarget* target)
{
	if (!target)
	{
		target = this->window;
		this->player->render(this->window);
	}
}

void level1::initTextures()
{
	std::cout << "initTextures()\n";

	if (!utility::loadFromFile("textures/playerTex.png", textures["PLAYER_IDLE"]))
	{
		std::cout << "Failed to load texture: playerTex.png\n";
	}
}

void level1::initPLayers()
{
	this->player = new playerClass(0, 0, &this->textures["PLAYER_IDLE"]);
}
