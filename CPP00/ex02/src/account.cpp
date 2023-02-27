/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pat <pat@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 03:42:56 by pat               #+#    #+#             */
/*   Updated: 2023/02/27 01:27:16 by pat              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "../include/Account.hpp"

/*PUBLIC*/
Account::Account(int initial_deposit):_accountIndex(_nbAccounts),_amount(initial_deposit),_nbDeposits(0),_nbWithdrawals(0)
{
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
	Account::_displayTimestamp();
	std::cout	<< "index:"
				<< this->_accountIndex
				<< ";amount:"
				<< this->_amount
				<< ";created"
				<< std::endl;
}

Account::~Account(void)
{
	return ;
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
	std::cout << "accout:" << Account::getNbAccounts();
	std::cout << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits();
	std::cout << ";withdrawals:" << Account::getNbWithdrawals();
}

void	makeDeposit(int deposit)
{
	
}
/*PRIVATE*/

Account::Account(void)
{
	return ;
}
void	_displayTimestamp( void )
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
