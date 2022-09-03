#pragma once
#include "entityClass.h"


class playerClass :
    public entityClass
{


public:
    playerClass(float x, float y, sf::Texture* texture);
    virtual ~playerClass();


private:
    virtual void update(const float& dt) override;

    virtual void initVariables();
    virtual void initComponents();

};

