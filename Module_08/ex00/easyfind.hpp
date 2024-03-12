#pragma once

#include <stdexcept>
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template <class T>
void    easyfind( T& container, int value )
{
    if ( std::find( container.begin(), container.end(), value ) != container.end())
        std::cout << "Found." << std::endl;
    else
        throw std::invalid_argument("Not found");
}