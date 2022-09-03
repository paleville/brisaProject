//This is the Logic of the game
#pragma once


#include "mainMenuClass.h"

class gameClass 
{
private:

	sf::RenderWindow *window;
	sf::Event event;

	void initWindow();
	void initStates();

	sf::Clock clock;
	float dt;


	std::stack<stateClass*> states;

	

public:

	gameClass();
	virtual~gameClass();

	void endApplication();

	void updateDt();
	void upddateEvents();
	void update();
	void render();
	void run();
	

};

