//these are the states

#pragma once

#include "playerClass.h"

class stateClass
{
private:

public:

	stateClass();

	stateClass(sf::RenderWindow* window, std::stack<stateClass*>* states);
	virtual ~stateClass();

	const bool& getQuit() const;

	virtual void checkforQuit();
	virtual void endState() = 0;

	virtual void updateKeyBinds(const float& dt) = 0;
	virtual void update(const float& dt) = 0;
	virtual void render(sf::RenderTarget * target = NULL) = 0;

	

protected:

	bool quit;
	std::stack<stateClass*>* states;
	sf::RenderWindow* window;
	
	std::map<std::string, sf::Texture> textures;

};

