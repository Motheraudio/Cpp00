#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact {
    
	private:
    std::string m_first_name;
    std::string m_last_name;
    std::string m_nickname;
    std::string m_phone;
    std::string m_secret;

    public:
    Contact();
	void	add_field(std::string &input, char field);
	std::string	get_field(char field);
	std::size_t	get_field_len(char field);
};
#endif
