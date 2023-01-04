
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
    void                SetFirstName(const std::string &s);
    void                SetLastName(const std::string &s);
    void                SetNickName(const std::string &s);
    void                SetPhoneNumber(const std::string &s);
    void                SetDarkestScret(const std::string &s);
    const std::string&  GetFirstName(void) const;
    const std::string&  GetLastName(void) const;
    const std::string&  GetNickName(void) const;
    const std::string&  GetPhoneNumber(void) const;
    const std::string&  GetDarkestScret(void) const;      
};

#endif