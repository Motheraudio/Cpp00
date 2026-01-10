#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <cstddef>

class Contact {
    private:
    std::string m_first_name;
    std::string m_last_name;
    std::string m_nickname;
    std::string m_phone;
    std::string m_secret;
    bool m_isempty;
    public:
    Contact();
    void	add_contact(std::string first_name, std::string last_name, std::string nickname, std::string phone, std::string secret);
	void	add_field(std::string &input, char field);
	std::string	get_field(char field);
    void	print_info() const;
    void	print_all() const;
	std::size_t	get_field_len(char field);
};
#endif
