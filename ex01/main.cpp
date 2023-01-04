#include <iostream>
#include "PhoneBook.hpp"
#include "Console.hpp"

int main(void)
{
    std::string     cmd;
    PhoneBook       book;
    Console         console;
    bool            isEof;

    while(1)
    {
        std::cout << "\n명령을 입력하세요\n" << "ex1) ADD\nex2) SEARCH\nex3) EXIT\n"
                << "CMD : ";
        if (!console.GetString(&cmd, &isEof))
            continue;
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