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
    bool m_isempty;
    public:
    Contact();
    void	add_contact(std::string first_name, std::string last_name, std::string nickname, std::string phone, std::string secret);
    void	print_info() const;
    void	print_all() const;
};
#endif
