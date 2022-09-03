#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <vector>
#include <stack>
#include <map>


//#include "playerClass.h"

class entityClass
{
private: 
	//void initVariables();

protected:
	sf::Texture* texture;
	sf::Sprite* sprite;

	sf::RectangleShape shape;
	float movementSpeed;

public:
	entityClass();
	~entityClass();


	



	void  createSprite(sf::Texture* texture);

	virtual void setPosition(const float x, const float y);
	virtual void move(const float& dt, const float dir_x, const float dir_y);
	virtual void update(const float& dt);
	virtual void render(sf::RenderTarget* target);

};

