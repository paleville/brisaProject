#pragma once
#include "stateClass.h"


class level1 :
	public stateClass
{

public:

	level1(sf::RenderWindow* window, std::stack<stateClass*>* states);
	virtual ~level1();


	void endState();

	void updateKeyBinds(const float& dt);
	void update(const float& dt);
	void render(sf::RenderTarget* target = NULL);


private:
	 playerClass* player;

	void initTextures();
	void initPLayers();

};