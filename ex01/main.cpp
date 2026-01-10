#include <iostream>
#include "PhoneBook.hpp"

std::string get_instruct()
{
	std::string instruct;

	std::getline(std::cin, instruct);
	return (instruct);
}

int main()
{
	PhoneBook	book;

	while(1)
	{
		if (get_instruct() == "ADD")
			book.add_contact();
		if (get_instruct() == "SEARCH")
			book.search();
		if (get_instruct() == "EXIT")
			return (0);
	}
}
