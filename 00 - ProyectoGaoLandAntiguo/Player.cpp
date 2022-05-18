//
// Created by shello on 05-05-22.
//

#include "Player.h"

void Player::initVariables()
{
    this->movementSpeed = 5.f;
}

void Player::initShape()
{
    this->shape.setFillColor(sf::Color::Red);
    this->shape.setSize(sf::Vector2f(50.f,50.f));
}

//Aquí seteo la ubicación del Player!!!
Player::Player(float x, float y)
{
    this->shape.setPosition(x, y);
    this->initVariables();
    this->initShape();
}

Player::~Player()
{

}

void Player::update(const sf::RenderTarget* target)
{
    this->updateInput();

    //Collisions
    this->updateWindowBoundsCollision(target);
}

void Player::render(sf::RenderTarget * target)
{
    target->draw(this->shape);
}

void Player::updateInput()
{
    //Keyboard input

    //IZQUIERDA
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        //OJO CON EL NEGATIVO!!!
        this->shape.move(-this->movementSpeed, 0.f);
    }//DERECHA
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        this->shape.move(this->movementSpeed, 0.f);
    }//ARRIBA
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        this->shape.move(0.f, -this->movementSpeed);
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        this->shape.move(0.f, this->movementSpeed);
    }
}

void Player::updateWindowBoundsCollision(const sf::RenderTarget *target)
{
    //IZQUIERDAAAA
    if(this->shape.getGlobalBounds().left <= 0.f)
        this->shape.setPosition(0.f, this->shape.getGlobalBounds().top);
    //DERECHA
    if(this->shape.getGlobalBounds().left +this->shape.getGlobalBounds().width >= target->getSize().x)
        this->shape.setPosition(target->getSize().x - this->shape.getGlobalBounds().width, this->shape.getGlobalBounds().top);
    //ARRIBA
    if(this->shape.getGlobalBounds().top <= 0.f)
        this->shape.setPosition(this->shape.getGlobalBounds().left, 0.f);
    //Abajo
    if(this->shape.getGlobalBounds().top +this->shape.getGlobalBounds().height >= target->getSize().y)
        this->shape.setPosition(this->shape.getGlobalBounds().left, target->getSize().y - this->shape.getGlobalBounds().height);
}