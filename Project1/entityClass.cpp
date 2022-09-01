#include "entityClass.h"

entityClass::entityClass()
{
	this->shape.setSize(sf::Vector2f(50.f, 50.f));
	//this->shape.setFillColor(sf::Color::Blue);
	this->movementSpeed = 100.f;
}

entityClass::~entityClass()
{
}

void entityClass::createSprite(sf::Texture* texture)
{
	this->texture = texture;
	this->sprite = new sf::Sprite(*this->texture);
	
}

void entityClass::setPosition(const float x, const float y)
{
	if (this->sprite)
	{
		this->sprite->setPosition(x, y);
	}
}

void entityClass::move(const float& dt,const float dir_x, const float dir_y)
{
	this->shape.move(dir_x * this->movementSpeed * dt, dir_y * this->movementSpeed * dt);
}

void entityClass::update(const float& dt)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		this->move(dt, -1.f, 0.f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		this->move(dt, 1.f, 0.f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		this->move(dt, 0.f, -1.f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		this->move(dt, 0.f, 1.f);
	}

}

void entityClass::render(sf::RenderTarget* target)
{
	target->draw(this->shape);
}
