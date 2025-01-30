/*
** EPITECH PROJECT, 2025
** ex02
** File description:
** Buzz.cpp
*/

#include <iostream>

#include "Buzz.hpp"

Buzz::Buzz(const std::string name, const std::string ascii)
    : Toy(BUZZ, name, ascii) {}

void Buzz::speak(std::string statement)
{
    std::cout << "BUZZ: " << this->getName() << " \"" << statement << "\"" << std::endl;
}
