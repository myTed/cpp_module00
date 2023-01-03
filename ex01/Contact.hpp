
#ifndef __CONTACT_HPP
#define __CONTACT_HPP

#include <string>

class Contact
{
private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickName;
    std::string _phoneNumber;
    std::string _darkestScret;
public:
    void                SetFirstName(std::string &s);
    void                SetLastName(std::string &s);
    void                SetNickName(std::string &s);
    void                SetPhoneNumber(std::string &s);
    void                SetDarkestScret(std::string &s);
    const std::string&  GetFirstName(void) const;
    const std::string&  GetLastName(void) const;
    const std::string&  GetNickName(void) const;
    const std::string&  GetPhoneNumber(void) const;
    const std::string&  GetDarkestScret(void) const;      
};

#endif