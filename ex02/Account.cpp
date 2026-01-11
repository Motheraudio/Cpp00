#include <iostream>
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
	std::cout << "[19920104_091532] "
		<< "index:" << _accountIndex
		<<";amount:" << _amount
		<< ";created" << std::endl;
}

int Account::getNbAccounts(){return (_nbAccounts);}
int Account::getTotalAmount(){return (_totalAmount);}
int Account::getNbDeposits(){return (_totalNbDeposits);}
int Account::getNbWithdrawals(){return (_totalNbWithdrawals);}
int Account::checkAmount() const {return(_amount);}


void	Account::_displayTimestamp( void ){
	return ;
}
void Account::displayStatus() const
{
	std::cout << "[19920104_091532] "
		<< "index:" << _accountIndex
		<<";amount:" << _amount
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:"<< _nbWithdrawals 
		<< std::endl;
}
void Account::displayAccountsInfos()
{
	std::cout << "[19920104_091532] "
		<< "accounts:" << getNbAccounts()
		<<";total:" << getTotalAmount()
		<<";deposits:" << getNbDeposits()
		<<";withdrawals:" << getNbWithdrawals()
		<< std::endl;
	
}

void Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "[19920104_091532] "
		<< "index:" << _accountIndex
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
	if (_amount - withdrawal < 0)
	{
		std::cout << "[19920104_091532] "
			<< "index:" << _accountIndex
			<<";p_amount:" << _amount
			<<";withdrawal:refused"
			<< std::endl;
		return (false);
	}
	else
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "[19920104_091532] "
			<< "index:" << _accountIndex
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
	std::cout << "[19920104_091532] "
		<< "index:" << _accountIndex
		<<";amount:" << _amount
		<< ";closed" << std::endl;
}
