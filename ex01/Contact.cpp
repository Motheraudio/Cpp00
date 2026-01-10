#include "Contact.hpp"

Contact::Contact()
{
	this->m_first_name = "";
    this->m_last_name = "";
    this->m_nickname = "";
    this->m_phone = "";
    this->m_secret = "";
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
void	Contact::add_field(std::string &input, char field)
{
	if (field == 'f')
		this->m_first_name = input;
	if (field == 'l')
		this->m_last_name = input;
	if (field == 'n')
		this->m_nickname = input;
	if (field == 'p')
		this->m_phone = input;
	if (field == 's')
		this->m_secret = input;
}
void Contact::print_info() const
{

}
void Contact::print_all() const
{

}
	
std::size_t	Contact::get_field_len(char field)
{
	if (field == 'f')
		return (this->m_first_name.length());
	if (field == 'l')
		return (this->m_last_name.length());
	return (this->m_nickname.length());
}

std::string	Contact::get_field(char field)
{
	if (field == 'f')
		return (this->m_first_name);
	if (field == 'l')
		return (this->m_last_name);
	if (field == 'n')
		return (this->m_nickname);
	if (field == 'p')
		return (this->m_phone);
	return (this->m_secret);
}
