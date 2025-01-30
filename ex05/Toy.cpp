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

bool Toy::setAscii(const std::string file)
{
    if (this->_picture.getPictureFromFile(file))
        return true;
    this->_lastError = Error("bad new illustration", "setAscii", Error::PICTURE);
    return false;
}

void Toy::speak(const std::string statement)
{
    std::cout << this->getName() << " \"" << statement << "\"" << std::endl;
}

bool Toy::speak_es(const std::string statement)
{
    (void) statement;
    this->_lastError = Error("wrong mode", "speak_es", Error::SPEAK);
    return false;
}

Toy::Error::Error(const std::string what, const std::string where, ErrorType error)
{
    this->_what = what;
    this->_where = where;
    this->type = error;
}


std::ostream& operator<<(std::ostream& os, const Toy& toy)
{
    os << toy.getName() << '\n' << toy.getAscii() << '\n';
    return os;
}

Toy& Toy::operator<<(const std::string ascii)
{
    this->_picture.data = ascii;
    return *this;
}
