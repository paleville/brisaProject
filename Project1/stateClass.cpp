#include "stateClass.h"

stateClass::stateClass(sf::RenderWindow* window, std::stack<stateClass*>* states)
{
	this->window = window;
	this->states = states;
	this->quit = false;
}

stateClass::~stateClass()
{
}

const bool& stateClass::getQuit() const
{
	return this->quit;
}

void stateClass::checkforQuit()
{
	static sf::Clock timeout;
	if (timeout.getElapsedTime().asMilliseconds() < 500) return;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
	{
		this->quit = true;
		timeout.restart();
	}
}
