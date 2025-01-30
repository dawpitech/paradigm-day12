/*
** EPITECH PROJECT, 2025
** ex00
** File description:
** Toy.cpp
*/

#include "Toy.hpp"

Toy::Toy(): _type(BASIC_TOY), _name("Toy") {}

Toy::Toy(ToyType type, std::string name, std::string file)
    : _type(type), _name(name), _picture(file) {}
