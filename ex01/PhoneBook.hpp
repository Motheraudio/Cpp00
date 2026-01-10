#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
#include <cstddef>
class PhoneBook
{
	private:
	Contact contacts[8];
	size_t	size;
	public:
	PhoneBook();
	int	add_contact();
};
#endif
