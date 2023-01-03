 #include "Contact.hpp"

void                Contact::SetFirstName(std::string &firstName)
{
    _firstName = firstName;
}
    
    
void                Contact::SetLastName(std::string &lastName)
{
    _lastName = lastName;
}

void                Contact::SetNickName(std::string &nickName)
{
    _nickName = nickName;
}

void                Contact::SetPhoneNumber(std::string &phoneNumber)
{
    _phoneNumber = phoneNumber;
}

void                Contact::SetDarkestScret(std::string &darkestScret)
{
    _darkestScret = darkestScret;
}

const std::string&  Contact::GetFirstName(void) const
{
    return (_firstName);
}

 const std::string&  Contact::GetLastName(void) const
{
    return (_lastName);
}

 const std::string&  Contact::GetNickName(void) const
{
    return (_nickName);
}

 const std::string&  Contact::GetPhoneNumber(void) const
{
    return (_phoneNumber);
}

 const std::string&  Contact::GetDarkestScret(void) const
{
    return (_darkestScret);
}