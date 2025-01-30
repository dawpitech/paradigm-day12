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

        class Error
        {
            public:
                enum ErrorType
                {
                    UNKNOWN,
                    PICTURE,
                    SPEAK,
                };

                Error(std::string what = {}, std::string where = {}, ErrorType error = UNKNOWN);
                std::string what() const { return this->_what; }
                std::string where() const { return this->_where; }
                ErrorType type;

            protected:
                std::string _what;
                std::string _where;
        };

        Toy();            // basic constructor
        ~Toy() = default; // basic destructor
        Toy(ToyType type, std::string name, std::string file); // full constructor
        Toy(const Toy& toy) = default;              // copy constructor
        Toy(Toy&& other) noexcept;                  // move constructor
        Toy& operator=(const Toy& other) = default; // assignment operator
        Toy& operator=(Toy&& other) noexcept;       // move operator
        Toy& operator<<(std::string ascii);

        ToyType getType() const { return this->_type; }
        std::string getName() const { return this->_name; }
        void setName(const std::string name) { this->_name = name; }
        std::string getAscii() const { return this->_picture.data; }
        bool setAscii(const std::string file);

        virtual void speak(std::string statement);
        virtual bool speak_es(std::string statement);

        Error getLastError() const { return this->_lastError; }

    protected:
        ToyType _type;
        std::string _name;
        Picture _picture;
        Error _lastError = Error();
};

std::ostream& operator<<(std::ostream& os, const Toy& toy);
#endif //TOY_HPP
