#include "Contact.hpp"

Contact::Contact()
{
	this->m_first_name = {};
    this->m_last_name = {};
    this->m_nickname = {};
    this->m_phone = {};
    this->m_secret = {};
    this->m_isempty = true;

}
void	Contact::add_contact(std::string first_name, std::string last_name, std::string nickname, std::string phone, std::string secret)
{
	this->m_first_name = first_name;
    this->m_last_name = last_name;
    this->m_nickname = nickname;
    this->m_phone = phone;
    this->m_secret = secret;
    this->m_isempty = false;

}
void Contact::print_info() const
{

}
void Contact::print_all() const
{

}
