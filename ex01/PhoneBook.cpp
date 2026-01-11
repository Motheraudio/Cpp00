#include "PhoneBook.hpp"
PhoneBook::PhoneBook()
	{
		Contact list[8];
		this->size = 0;
	}

int	PhoneBook::add_contact()
{
	std::string	input;
	size_t	index = this->size % 8;
	std::cout << "First Name:" << std::endl;
	std::getline(std::cin, input);
	if (input.empty())
		throw std::runtime_error("Input Error");
	this->contacts[index].add_field(input, 'f');
	std::cout << "Last Name:" << std::endl;
	std::getline(std::cin, input);
	if (input.empty())
		throw std::runtime_error("Input Error");
	this->contacts[index].add_field(input, 'l');
	std::cout << "Nickname:" << std::endl;
	std::getline(std::cin, input);
	if (input.empty())
		throw std::runtime_error("Input Error");
	this->contacts[index].add_field(input, 'n');
	std::cout << "Phone:" << std::endl;
	std::getline(std::cin, input);
	if (input.empty())
		throw std::runtime_error("Input Error");
	this->contacts[index].add_field(input, 'p');
	std::cout << "Secret:" << std::endl;
	std::getline(std::cin, input);
	if (input.empty())
		throw std::runtime_error("Input Error");
	this->contacts[index].add_field(input, 's');
	this->size++;
	return (1);
}

void	PhoneBook::search()
{
	std::string	index;
	int	real_size;
	if (this->size == 0)
		return;
	if (this->size > 8)
		real_size = 8;
	else
		real_size = this->size;
	for (int i = 0; i < real_size; i++)
	{
		std::cout << std::setw(10) << i << "|" ;
		if (this->contacts[i].get_field_len('f') > 10)
			std::cout << std::setw(10) << this->contacts[i].get_field('f').substr(0, 9) + ".";
		else
			std::cout << std::setw(10) << this->contacts[i].get_field('f');
		std::cout << "|";
		if (this->contacts[i].get_field_len('l') > 10)
			std::cout << std::setw(10) << this->contacts[i].get_field('l').substr(0, 9) + ".";
		else
			std::cout << std::setw(10) << this->contacts[i].get_field('l');
		std::cout << "|";
		if (this->contacts[i].get_field_len('n') > 10)
			std::cout << std::setw(10) << this->contacts[i].get_field('n').substr(0, 9) + ".";
		else
			std::cout << std::setw(10) << this->contacts[i].get_field('n');
		std::cout << "|";
	std::cout << std::endl;
	}
	while (1)
	{
		std::cout << "Which contact? provide its index" << std::endl;
		std::getline(std::cin, index);
		if (index.size() == 1 && std::isdigit(index[0]) && index[0] < this->size - 1 + '0')
		{
			std::cout << this->contacts[std::atoi(index.c_str())].get_field('f') << std::endl;
			std::cout << this->contacts[std::atoi(index.c_str())].get_field('l') << std::endl;
			std::cout << this->contacts[std::atoi(index.c_str())].get_field('n') << std::endl;
			std::cout << this->contacts[std::atoi(index.c_str())].get_field('p') << std::endl;
			std::cout << this->contacts[std::atoi(index.c_str())].get_field('s') << std::endl;
			return;
		}
		else if (index[0] == 0)
				throw std::runtime_error("Passing NULL byte");
		else
		{
			std::cout << "Not valid index. Please try again." << std::endl;
			return;
		}
	}
}
