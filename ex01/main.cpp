#include <iostream>
#include "PhoneBook.hpp"

void ClearInputError(std::istream &is)
{
    if (is.eof())
    {
        is.clear();
        std::clearerr(stdin);
        return ;
    }
    is.clear();
    while (std::cin.get() != '\n');
    return ;
}

int main(void)
{
    std::string cmd;
    PhoneBook book;

    while(1)
    {
        std::cout << "\n명령을 입력하세요\n" << "ADD\t SEARCH\t EXIT\n" << "CMD : ";
        std::getline(std::cin, cmd);
        if (!std::cin.good())
        {
            ClearInputError(std::cin);
            continue;
        }
        if (cmd == "ADD")
            book.Add();
        else if(cmd == "SEARCH")
            book.Search();
        else if(cmd == "EXIT")
            return (0);
        else
            std::cout << "잘못된 입력입니다.\n";
    }
    return (0);
}