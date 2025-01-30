/*
** EPITECH PROJECT, 2025
** ex02
** File description:
** Woody.hpp
*/

#ifndef WOODY_HPP
    #define WOODY_HPP

    #include "Toy.hpp"

class Woody : public Toy
{
    public:
        Woody(std::string name, std::string ascii="woody.txt");
        void speak(std::string statement) const override;
};
#endif //WOODY_HPP
