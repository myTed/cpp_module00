#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

void ClearInputError(std::istream &is);

bool PhoneBook::Add(void)
{
    std::string tmp;

    std::cout << "firstName을 입력하세요 : ";
    std::getline(std::cin, tmp);
    if (!std::cin.good())
    {
        ClearInputError(std::cin);
        return (false);
    }
    _contactArry[_idx].SetFirstName(tmp);
    std::cout << "LastName을 입력하세요 : ";
    std::getline(std::cin, tmp);
    if (!std::cin.good())
    {
        ClearInputError(std::cin);
        return (false);
    }
    _contactArry[_idx].SetLastName(tmp);
    
    std::cout << "NickName을 입력하세요 : ";
    std::getline(std::cin,tmp);
    _contactArry[_idx].SetNickName(tmp);

    std::cout << "PhoneNumber를 입력하세요: ";
    std::getline(std::cin, tmp);
    _contactArry[_idx].SetPhoneNumber(tmp);

    std::cout << "Darket Secret을 입력하세요: ";
    std::getline(std::cin, tmp);
    _contactArry[_idx].SetDarkestScret(tmp);
    _idx = (_idx + 1) % ARRY_SIZE;
    return (true);
}

void PhoneBook::Search(void)
{
    int     searchIdx;

    while (1)
    {
        std::cout << "\n찾고자 하는 Index (0 - 8) 를 입력하세요 :";
        std::cin >> searchIdx;
        if (!std::cin.good())
        {
            ClearInputError(std::cin);
            continue;
        }
        if (searchIdx < 0 || searchIdx >= ARRY_SIZE)
            std::cout << "잘못 입력하셨습니다.\n";
        else if(searchIdx >= _idx)
            std::cout << "입력된 부분이 없습니다.\n";
        else
        {
            std::cout << _contactArry[searchIdx].GetFirstName() << std::endl;
            std::cout << _contactArry[searchIdx].GetLastName() << std::endl;
            std::cout << _contactArry[searchIdx].GetNickName() << std::endl;
            std::cout << _contactArry[searchIdx].GetPhoneNumber() << std::endl;
            while (std::cin.get() != '\n');
            break ;
        }
        while (std::cin.get() != '\n');
    }
}