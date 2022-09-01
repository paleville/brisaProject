#include "mainMenuClass.h"

mainMenuClass::mainMenuClass(sf::RenderWindow* window, std::stack<stateClass*>* states)
	: stateClass(window, states)
{
	this->background.setSize(sf::Vector2f(window->getSize().x, window->getSize().y));
	this->background.setFillColor(sf::Color::Yellow);
}

mainMenuClass::~mainMenuClass()
{
}


void mainMenuClass::endState()
{
	std::cout << "Ending Level1!" << "\n";
}

void mainMenuClass::updateKeyBinds(const float& dt)
{
	this->checkforQuit();	
}

void mainMenuClass::update(const float& dt)
{
	this->updateKeyBinds(dt);

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		std::cout << "do something else" << "\n";
	}
}

void mainMenuClass::render(sf::RenderTarget* target)
{
	if (!target)
	{
		target = this->window;
	}


	target->draw(this->background);
}
