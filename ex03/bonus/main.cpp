/*
** EPITECH PROJECT, 2025
** paradigm-day12
** File description:
** main.cpp
*/

#include <memory>

#include "Buzz.hpp"
#include "Woody.hpp"

int main()
{
    std::unique_ptr<Toy> b(new Buzz("buzziiiii"));
    std::unique_ptr<Toy> w(new Woody("wood"));
    std::unique_ptr<Toy> t(new Toy(Toy::ALIEN, "ET", "bonus/ascii.txt"));
    b->speak("To the code, and beyond !!!!!!!!");
    w->speak("There's a snake in my boot.");
    t->speak("the claaaaaaw");
}
