#pragma once
#include  "level1.h"

class mainMenuClass :
    public stateClass
{


public:

	mainMenuClass(sf::RenderWindow* window);
	virtual ~mainMenuClass();


	void endState();

	void updateKeyBinds(const float& dt);
	void update(const float& dt);
	void render(sf::RenderTarget* target = nullptr);


private:

	sf::RectangleShape background;


};

