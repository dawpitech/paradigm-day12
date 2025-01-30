/*
** EPITECH PROJECT, 2025
** ex00
** File description:
** Toy.cpp
*/

#include <functional>

#include "Toy.hpp"

#include <iostream>

Toy::Toy()
    : _type(BASIC_TOY)
    , _name("Toy") {}

Toy::Toy(ToyType type, std::string name, std::string file)
    : _type(type)
    , _name(name)
    , _picture(file) {}

Toy::Toy(Toy&& other) noexcept
{
    this->_type = other._type;
    this->_name = std::move(other._name);
    this->_picture = std::move(other._picture);
}

Toy& Toy::operator=(Toy&& other) noexcept
{
    this->_type = other._type;
    this->_name = std::move(other._name);
    this->_picture = std::move(other._picture);
    return *this;
}

void Toy::speak(const std::string statement) const
{
    std::cout << this->getName() << " " << statement;
}
