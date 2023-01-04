#ifndef __PHONE_BOOK_HPP
#define __PHONE_BOOK_HPP
#include "Contact.hpp"
#include "Console.hpp"

class PhoneBook
{
private:
    enum 
    {
        ADD_QUESTION_MSG_CNT = 5,
        ARRY_SIZE = 8,
        WIDE_LIMIT = 10
    };
    enum
    {
        FIRST_NAME_IDX = 0, 
        LAST_NAME_IDX,
        NICK_NAME_IDX,
        PHONE_NUMBER_IDX,
        DARK_SCRET_IDX
    };
private:
    const char* _promptAddMsg[ADD_QUESTION_MSG_CNT];
    int         _contactNum;
    Contact     _arry[ARRY_SIZE];
    Console     _console;
private:
    void        ShowShortString(const std::string &str, size_t wideLimit) const;
    void        ShowContact(int contactIdx) const;
    void        ShowContactList(void) const;
    bool        AddContact(int addIdx, const std::string &contactItem);
public:
    PhoneBook();
    bool        Add(void);
    void        Search(void);
};
#endif