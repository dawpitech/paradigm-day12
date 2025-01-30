/*
** EPITECH PROJECT, 2025
** paradigm-day12
** File description:
** main.cpp
*/

#include <iostream>

#include "Toy.hpp"

int main_ex00()
{
    Toy toto;
    Toy ET(Toy::ALIEN, "green", "./bonus/ascii.txt");
    toto.setName("TOTO !");
    if (toto.getType() == Toy::BASIC_TOY)
        std::cout << "basic toy: " << toto.getName() << std::endl
            << toto.getAscii() << std::endl;
    if (ET.getType() == Toy::ALIEN)
        std::cout << "this alien is: " << ET.getName() << std::endl
            << ET.getAscii() << std::endl;
    return 0;
}

int main()
{
    return main_ex00();
}
