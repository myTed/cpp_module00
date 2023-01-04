#ifndef _CONSOLE_H
#define _CONSOLE_H
#include <string>

class Console
{
public:
    bool  GetString(std::string *pStr, bool *pIsEof);
    bool  GetNum(int *pNum, bool *pIsEof);
};

#endif