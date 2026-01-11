#include "Account.hpp"
#include <iostream>
Account::Account(int initial_deposit)
	: _amount(initial_deposit),
	_accountIndex(_nbAccounts),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_nbAccounts++;
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
void Account::displayAccountsInfos()
{

}

