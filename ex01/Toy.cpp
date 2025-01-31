/*
** EPITECH PROJECT, 2025
** ex00
** File description:
** Toy.cpp
*/

#include "Toy.hpp"

#include <functional>

Toy::Toy()
    : _type(BASIC_TOY)
    , _name("toy") {}

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
