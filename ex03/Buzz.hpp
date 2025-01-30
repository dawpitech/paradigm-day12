/*
** EPITECH PROJECT, 2025
** ex02
** File description:
** Buzz.hpp
*/

#ifndef BUZZ_HPP
    #define BUZZ_HPP

    #include "Toy.hpp"

class Buzz : public Toy
{
    public:
        Buzz(std::string name, std::string ascii="buzz.txt");
        void speak(std::string statement) const override;
};
#endif //BUZZ_HPP
