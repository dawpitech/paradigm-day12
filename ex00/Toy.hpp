/*
** EPITECH PROJECT, 2025
** ex00
** File description:
** Toy.hpp
*/

#ifndef TOY_HPP
    #define TOY_HPP

    #include <string>

    #include "Picture.hpp"

class Toy
{
    public:
        enum ToyType
        {
            BASIC_TOY,
            ALIEN,
        };
        Toy();
        Toy(ToyType type, std::string name, std::string file);
        ToyType getType() const { return this->_type; }
        std::string getName() const { return this->_name; }
        void setName(const std::string name) { this->_name = name; }
        std::string getAscii() { return this->_picture.data; }
        bool setAscii(const std::string file) { return this->_picture.getPictureFromFile(file); }

    protected:
        const ToyType _type;
        std::string _name;
        Picture _picture;
};
#endif //TOY_HPP
