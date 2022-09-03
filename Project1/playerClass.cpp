#include "playerClass.h"

playerClass::playerClass(float x, float y, sf::Texture* texture)
{
	this->initVariables();
	this->initComponents();

	this->createSprite(texture);
	this->setPosition(x, y);

	movementSpeed = 32.f;
}

playerClass::~playerClass()
{
}

void playerClass::initVariables()
{
}

void playerClass::initComponents()
{
}

void playerClass::update(const float& dt) {
	entityClass::update(dt); //inherit from parent

	float spd = 1.f;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		this->move(dt, -spd, 0.f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		this->move(dt, spd, 0.f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		this->move(dt, 0.f, -spd);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		this->move(dt, 0.f, spd);
	}
}