#pragma once
#include "entityClass.h"


class playerClass :
    public entityClass
{


public:
    playerClass(float x, float y, sf::Texture* texture);
    ~playerClass();


private:
    void initVariables();
    void initComponents();

};

