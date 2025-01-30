/*
** EPITECH PROJECT, 2025
** paradigm-day12
** File description:
** Picture.cpp
*/

#include <fstream>
#include <iostream>

#include "Picture.hpp"

Picture::Picture(Picture&& other) noexcept
{
    this->data = std::move(other.data);
}

Picture& Picture::operator=(Picture&& other) noexcept
{
    this->data = std::move(other.data);
    return *this;
}

Picture::Picture(const std::string& file)
{
    this->getPictureFromFile(file);
}

bool Picture::getPictureFromFile(const std::string& file)
{
    std::ifstream file_stream(file, std::ios::in | std::ios::ate);

    if (!file_stream.is_open()) {
        this->data = ERROR_STR;
        return false;
    }
    const auto size = file_stream.tellg();
    this->data = std::string(size, '\0');
    file_stream.seekg(0);
    file_stream.read(&this->data[0], size);
    file_stream.close();
    return true;
}
