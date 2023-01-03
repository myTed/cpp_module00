#ifndef __PHONE_BOOK_HPP
#define __PHONE_BOOK_HPP
#include "Contact.hpp"
class PhoneBook
{
    enum {ARRY_SIZE = 8};
private:
    Contact     _contactArry[ARRY_SIZE];
    int         _idx;
public:
    PhoneBook() : _idx(0) {}
    bool        Add(void);
    void        Search(void);
};
#endif