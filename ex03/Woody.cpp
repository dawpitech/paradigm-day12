/*
** EPITECH PROJECT, 2025
** ex02
** File description:
** Woody.cpp
*/

#include <iostream>

#include "Woody.hpp"

Woody::Woody(const std::string name, const std::string ascii)
    : Toy(WOODY, name, ascii) {}

void Woody::speak(std::string statement) const
{
    std::cout << "WOODY: " << this->getName() << " " << statement;
}
