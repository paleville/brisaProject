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
	if (sprite != nullptr) {
		sprite->move(dir_x * this->movementSpeed * dt, dir_y * this->movementSpeed * dt);
	}
}

void entityClass::update(const float& dt)
{

}

void entityClass::render(sf::RenderTarget* target)
{
	target->draw(this->shape);
	target->draw(*sprite);
}
