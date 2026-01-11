#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>
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
