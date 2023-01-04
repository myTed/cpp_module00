#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <cstdio>


void PhoneBook::Search(void)
{
    int     searchIdx;
    int     searchMax;
    bool    isEof;

    ShowContactList();
    while (1)
    {
        std::cout << "\nIndex (0 - 7) 를 입력하세요, 입력취소(ctrl-D):";
        if (!_console.GetNum(&searchIdx, &isEof))
        {
            if (isEof)
                return ;
            std::cout << "잘못 입력하셨습니다.\n";
            continue;
        }
        searchMax = (_contactNum == ARRY_SIZE)? ARRY_SIZE : _contactNum;
        if (searchIdx < 0 || searchIdx >= ARRY_SIZE)
            std::cout << "잘못 입력하셨습니다.\n";
        else if(searchIdx >= searchMax)
            std::cout << "입력된 부분이 없습니다.\n";
        else
        {
            ShowContact(searchIdx);
            break ;
        }
    }
}

PhoneBook::PhoneBook() : _contactNum(0)
{
    _promptAddMsg[FIRST_NAME_IDX] = "firstName을 입력하세요 :";
    _promptAddMsg[LAST_NAME_IDX] = "LastName을 입력하세요 :";
    _promptAddMsg[NICK_NAME_IDX] = "NickName을 입력하세요 :";
    _promptAddMsg[PHONE_NUMBER_IDX] = "PhoneNumber을 입력하세요: ";
    _promptAddMsg[DARK_SCRET_IDX] = "Darket Scret을 입력하세요: ";
}

bool PhoneBook::AddContact(int addIdx, const std::string &contactItem)
{
    switch (addIdx)
    {
        case FIRST_NAME_IDX:
            _arry[_contactNum % ARRY_SIZE].SetFirstName(contactItem);
            break;
        case LAST_NAME_IDX:
            _arry[_contactNum % ARRY_SIZE].SetLastName(contactItem);
            break;
        case NICK_NAME_IDX:
            _arry[_contactNum % ARRY_SIZE].SetNickName(contactItem);
            break;
        case PHONE_NUMBER_IDX:
            _arry[_contactNum % ARRY_SIZE].SetPhoneNumber(contactItem);
            break;
        case DARK_SCRET_IDX:
            _arry[_contactNum % ARRY_SIZE].SetDarkestScret(contactItem);
            break;
        default:
            std::cout << "잘못된 입력!\n";
            return (false);
    }
    return (true);
}


bool PhoneBook::Add(void)
{
    std::string name;
    bool        isEof;

    for(int addIdx = FIRST_NAME_IDX ; addIdx <= DARK_SCRET_IDX; addIdx++)
    {
        std::cout << _promptAddMsg[addIdx];
        if ((_console.GetString(&name, &isEof) == false) && (isEof == true))
            return (false);
        if (name[0] == '\0')
        {
            addIdx--;
            continue;
        }
        if (AddContact(addIdx, name) == false)
            return (false);
    }
    _contactNum++;
    return (true);
}


void PhoneBook::ShowShortString(const std::string &str, size_t wideLimit) const
{
    if (str.size() >= wideLimit)
    {
        for (size_t idx = 0; idx < wideLimit - 1; idx++)
            std::cout << str[idx];
        std::cout << "." << "|";
        return ;
    }
    std::cout << std::setw(wideLimit) << str << "|";
}


void PhoneBook::ShowContactList(void) const
{
    std::cout << std::right;
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First" << "|";
    std::cout << std::setw(10) << "Last" << "|";
    std::cout << std::setw(10) << "Nick" << "|" << std::endl;
    std::cout << "============================================" << std::endl;
    int lineCnt = (_contactNum >= ARRY_SIZE)? ARRY_SIZE : _contactNum;
    for (int idx = 0; idx < lineCnt; idx++)
    {
        std::cout << std::setw(WIDE_LIMIT) << idx << "|";
        ShowShortString(_arry[idx].GetFirstName(), WIDE_LIMIT);
        ShowShortString(_arry[idx].GetLastName(), WIDE_LIMIT);
        ShowShortString(_arry[idx].GetNickName(), WIDE_LIMIT);
        std::cout << std::endl;
    }
    std::cout << "\n\n";
}

void PhoneBook::ShowContact(int searchIdx) const
{
    std::cout << "FirstName : " << _arry[searchIdx].GetFirstName() << "\n";
    std::cout << "LastName : " << _arry[searchIdx].GetLastName() << "\n";
    std::cout << "NickName : " << _arry[searchIdx].GetNickName() << "\n";
    std::cout << "PhoneNumber :" << _arry[searchIdx].GetPhoneNumber() << "\n";
    std::cout << "Darkest short: " << _arry[searchIdx].GetDarkestScret() << "\n";
}
