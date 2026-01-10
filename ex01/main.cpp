#include <iostream>
#include <exception>
#include "PhoneBook.hpp"

int main()
{
	PhoneBook	book;
	std::string instruct;
	try {
		while(1)
		{
			std::cout << "ADD, SEARCH or EXIT"<<std::endl;
			std::getline(std::cin, instruct);
			if (instruct == "ADD")
				book.add_contact();
			else if (instruct[0] == 0)
				return (1);
			else if (instruct == "SEARCH")
				book.search();
			else if (instruct == "EXIT")
				return (0);
		}
	} catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
}
