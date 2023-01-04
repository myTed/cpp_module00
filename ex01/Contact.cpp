 #include "Contact.hpp"

void                Contact::SetFirstName(const std::string &firstName)
{
    _firstName = firstName;
}
    
    
void                Contact::SetLastName(const std::string &lastName)
{
    _lastName = lastName;
}

void                Contact::SetNickName(const std::string &nickName)
{
    _nickName = nickName;
}

void                Contact::SetPhoneNumber(const std::string &phoneNumber)
{
    _phoneNumber = phoneNumber;
}

void                Contact::SetDarkestScret(const std::string &darkestScret)
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