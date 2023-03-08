/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmattheo <rmattheo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 03:42:56 by pat               #+#    #+#             */
/*   Updated: 2023/03/08 10:12:20 by rmattheo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"


int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/*PUBLIC*/
Account::Account(int initial_deposit):	_accountIndex(_nbAccounts),
											_amount(initial_deposit),
												_nbDeposits(0),
													_nbWithdrawals(0)
{
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
	_displayTimestamp();
	std::cout	<< "index:"
				<< this->_accountIndex
				<< ";amount:"
				<< this->_amount
				<< ";created"
				<< std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout	<< "index:"
				<< this->_accountIndex
				<< ";amount:"
				<< this->_amount
				<< ";closed"
				<< std::endl;
	Account::_nbAccounts--;
	Account::_amount -= this->_amount;
}
int	Account::getNbAccounts(void)
{
	return(Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return(Account::_totalAmount);
}
int	Account::getNbDeposits(void)
{
	return(Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return(Account::_totalNbWithdrawals);
}

int	Account::checkAmount(void) const
{
	return(this->_amount);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts();
	std::cout << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits();
	std::cout << ";withdrawals:" << Account::getNbWithdrawals();
	std::cout << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	this->_nbDeposits++;
	this->_amount += deposit;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	_displayTimestamp();
	std::cout	<< "index:"
				<< this->_accountIndex
				<< ";p_amount:"
				<< this->_amount - deposit
				<< ";deposit:"
				<< deposit
                << ";amount:"
                << this->_amount
				<< ";nb_deposits:" 
				<< this->_nbDeposits
				<< std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout	<< "index:"
                	<< this->_accountIndex
                	<< ";p_amount:"
					<< this->_amount;
	if (this->_amount >=withdrawal)
	{
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
   		std::cout	<< ";withdrawal:"
					<< withdrawal
					<< ";amount:"
					<< this->_amount
					<< ";nb_withdrawals:" 
					<< this->_nbWithdrawals
					<< std::endl;
		return(true);
	}
	std::cout	<< ";withdrawal:refused"
				<< std::endl;
	return(false);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout	<<"index:"
				<< this->_accountIndex
				<< ";amount:"
				<< this->_amount
				<< ";deposits:"
				<< this->_nbDeposits
				<< ";withdrawals:"
				<< this->_nbWithdrawals
				<< std::endl;
}
/*PRIVATE*/

Account::Account(void)
{
	return ;
}
void	Account::_displayTimestamp( void )
{
	std::time_t	timestamp = std::time(0);
	tm			*time = localtime(&timestamp);

	std::cout	<< "["
				<< time->tm_year + 1900
				<< time->tm_mon
				<< time->tm_mday
				<< '_'
				<< time->tm_hour
				<< time->tm_min
				<< time->tm_sec
				<< "] ";
}
