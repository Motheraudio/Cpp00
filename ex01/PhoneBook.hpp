#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
class PhoneBook
{
	private:
	Contact contacts[8];
	int	size;
	public:
	PhoneBook();
	int		add_contact();
	void	search();
};
#endif
