/*
** EPITECH PROJECT, 2025
** paradigm-day12
** File description:
** main.cpp
*/

#include <iostream>

#include "Woody.hpp"

int main()
{
    Toy a(Toy::BASIC_TOY, "REX", "bonus/ascii.txt");
    std::cout << a;
    a << "rawr xD";
    std::cout << a;
}
