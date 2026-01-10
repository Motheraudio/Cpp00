#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"
PhoneBook::PhoneBook()
	{
		Contact list[8];
		this->size = -1;
	}

int	PhoneBook::add_contact()
{
	std::string	input;
	size_t	index;

	if (this->size > 7)
		index = 7;
	else
		index = this->size + 1;
	std::cout << "First Name:" << std::endl;
	std::getline(std::cin, input);
	if (input.empty())
		return (std::cout << "fields must not be empty. Aborting addition." <<std::endl, 0);
	this->contacts[index].add_field(input, 'f');
	std::cout << "Last Name:" << std::endl;
	std::getline(std::cin, input);
	if (input.empty())
		return (std::cout << "fields must not be empty. Aborting addition." <<std::endl, 0);
	this->contacts[index].add_field(input, 'l');
	std::cout << "Nickname:" << std::endl;
	std::getline(std::cin, input);
	if (input.empty())
		return (std::cout << "fields must not be empty. Aborting addition." <<std::endl, 0);
	this->contacts[index].add_field(input, 'n');
	std::cout << "Phone:" << std::endl;
	std::getline(std::cin, input);
	if (input.empty())
		return (std::cout << "fields must not be empty. Aborting addition." <<std::endl, 0);
	this->contacts[index].add_field(input, 'p');
	std::cout << "Secret:" << std::endl;
	std::getline(std::cin, input);
	if (input.empty())
		return (std::cout << "fields must not be empty. Aborting addition." <<std::endl, 0);
	this->contacts[index].add_field(input, 's');
	this->size++;
	return (1);
}

void	PhoneBook::search()
{
	if (this->size == -1)
		return ;
	for (int i = 0; i < this->size + 1; i++)
	{
		std::cout << std::setw(10);
		std::cout << i << std::right;
		std::cout << "|";
		if (this->contacts[i].get_field_len('f') > 10)
			std::cout << std::setw(9) << this->contacts[i].get_field('f') << std::right << ".";
		else
			std::cout << std::setw(10) << this->contacts[i].get_field('f') << std::right;
		std::cout << "|";
		if (this->contacts[i].get_field_len('l') > 10)
			std::cout << std::setw(9) << this->contacts[i].get_field('l') << std::right << ".";
		else
			std::cout << std::setw(10) << this->contacts[i].get_field('l') << std::right;
		std::cout << "|";
		if (this->contacts[i].get_field_len('n') > 10)
			std::cout << std::setw(9) << this->contacts[i].get_field('n') << std::right << ".";
		else
			std::cout << std::setw(10) << this->contacts[i].get_field('n') << std::right;
		std::cout << "|";
		std::cout << std::endl;
	}
	// while (1)
	// {
	// }
}
