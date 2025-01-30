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
            BUZZ,
            WOODY
        };
        Toy();            // basic constructor
        ~Toy() = default; // basic destructor
        Toy(ToyType type, std::string name, std::string file); // full constructor
        Toy(const Toy& toy) = default;              // copy constructor
        Toy(Toy&& other) noexcept;                  // move constructor
        Toy& operator=(const Toy& other) = default; // assignment operator
        Toy& operator=(Toy&& other) noexcept;       // move operator

        ToyType getType() const { return this->_type; }
        std::string getName() const { return this->_name; }
        void setName(const std::string name) { this->_name = name; }
        std::string getAscii() const { return this->_picture.data; }
        bool setAscii(const std::string file) { return this->_picture.getPictureFromFile(file); }
        virtual void speak(std::string statement);

    protected:
        ToyType _type;
        std::string _name;
        Picture _picture;
};
#endif //TOY_HPP
