#include "gameClass.h"

//static functions


void gameClass::initWindow()
{
	this->window = new sf::RenderWindow(sf::VideoMode(1366, 768), "window_2D");
	this->window->setFramerateLimit(120);
}

void gameClass::initStates()
{
	this->states.push(new level1(this->window, &this->states));

	this->states.push(new mainMenuClass(this->window, &this->states));	
}

gameClass::gameClass()
{
	this->initWindow();
	this->initStates();
}

gameClass::~gameClass()
{
	delete this->window;

	while (!this->states.empty())
	{
		delete this->states.top();
		this->states.pop();
	}
}

void gameClass::endApplication()
{
	std::cout << "Ending App" << "\n";
}

void gameClass::updateDt()
{
	this->dt = this->clock.restart().asSeconds();

	//system("cls");
	//std::cout << this->dt << "\n";
}

void gameClass::upddateEvents()
{

	while (window->pollEvent(this->event))
	{
		if (this->event.type == sf::Event::Closed)
			this->window->close();
	}
}

void gameClass::update()
{
	this->upddateEvents();


	if (!this->states.empty())
	{
		this->states.top()->update(this->dt);

		if (this->states.top()->getQuit())
		{
			this->states.top()->endState();
			delete this->states.top();
			this->states.pop();
		}
	}

	else
	{
		this->endApplication();
		this->window->close();
	}

}

void gameClass::render()
{
	this->window->clear();


	if (!this->states.empty())
	{
		this->states.top()->render();
	}

	this->window->display();

}

void gameClass::run()
{

	while (this->window->isOpen())
	{
		this->updateDt();
		this->update();
		this->render();
	}
}
