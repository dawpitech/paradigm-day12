/*
** EPITECH PROJECT, 2025
** paradigm-day12
** File description:
** Picture.hpp
*/

#ifndef PICTURE_HPP
    #define PICTURE_HPP

    #include <string>

#define ERROR_STR std::string("ERROR");

class Picture
{
    public:
        Picture() = default;
        ~Picture() = default;
        Picture(const Picture& other) = default;
        Picture(Picture&& other) noexcept;
        Picture& operator=(const Picture& other) = default;
        Picture& operator=(Picture&& other) noexcept;

        Picture(const std::string& file);
        bool getPictureFromFile(const std::string& file);
        std::string data = {};
};
#endif //PICTURE_HPP
