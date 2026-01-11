#include <iostream>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount= 0;
int	Account::_totalNbDeposits= 0;
int	Account::_totalNbWithdrawals= 0;
Account::Account(int initial_deposit)
	: _accountIndex(_nbAccounts),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	this->_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<<";amount:" << _amount
		<< ";created" << std::endl;
}

int Account::getNbAccounts(){return (_nbAccounts);}
int Account::getTotalAmount(){return (_totalAmount);}
int Account::getNbDeposits(){return (_totalNbDeposits);}
int Account::getNbWithdrawals(){return (_totalNbWithdrawals);}
int Account::checkAmount() const {return(_amount);}


void	Account::_displayTimestamp( void )
{
	time_t time = std::time(0);
	struct tm tm = *std::localtime(&time);
	char buff[16];
	strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S", &tm);
	std::cout << "[" << buff << "] ";
	// std::cout << "[19920104_091532] ";
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<<";amount:" << _amount
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:"<< _nbWithdrawals 
		<< std::endl;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
		<<";total:" << getTotalAmount()
		<<";deposits:" << getNbDeposits()
		<<";withdrawals:" << getNbWithdrawals()
		<< std::endl;
	
}

void Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<<";p_amount:" << _amount
		<< ";deposit:" << deposit
		<< ";amount:"<< _amount + deposit
		<< ";nb_deposits:" << _nbDeposits
		<< std::endl;
	_amount += deposit;
	_totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (_amount - withdrawal < 0)
	{
		std::cout << "index:" << _accountIndex
			<<";p_amount:" << _amount
			<<";withdrawal:refused"
			<< std::endl;
		return (false);
	}
	else
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "index:" << _accountIndex
			<<";p_amount:" << _amount
			<< ";withdrawal:" << withdrawal
			<< ";amount:"<< _amount - withdrawal
			<< ";nb_withdrawals:" << _nbWithdrawals
			<< std::endl;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		return (true);
	}
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<<";amount:" << _amount
		<< ";closed" << std::endl;
}
