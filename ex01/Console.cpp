#include "Console.hpp"
#include <iostream>
#include <cstdio>

bool Console::GetString(std::string *pStr, bool *pIsEof)
{
    std::getline(std::cin, *pStr);
    *pIsEof = false;
    if (!std::cin.good())
    {
        if (std::cin.eof())
        {
            std::cin.clear();
            std::clearerr(stdin);
            *pIsEof = true;
            return (false);
        }
        std::cin.clear();
        while (std::cin.get() != '\n');
        return (false);
    }
    return (true);
}

bool Console::GetNum(int *pNum, bool *pIsEof)
{
    std::cin >> *pNum;

    *pIsEof = false;
    if (!std::cin.good())
    {
        if (std::cin.eof())
        {
            std::cin.clear();
            
            std::clearerr(stdin);
            *pIsEof = true;
            return (false);
        }
        std::cin.clear();
        while (std::cin.get() != '\n');
        return (false);
    }
    if (std::cin.peek() != '\n')
    {
        while (std::cin.get() != '\n');
        return (false);
    }
    std::cin.get();
    return (true);
}