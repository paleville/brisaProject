#include "playerClass.h"

playerClass::playerClass(float x, float y, sf::Texture* texture)
{
	this->initVariables();
	this->initComponents();

	this->createSprite(texture);
	this->setPosition(x, y);
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
