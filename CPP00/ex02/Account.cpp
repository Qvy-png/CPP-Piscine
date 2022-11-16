/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:30:23 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/10/27 17:10:50 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int 	Account::_nbAccounts = 0;
int 	Account::_totalAmount = 0;
int 	Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void ) {

	time_t	now = time( 0 );
	tm		*ltm = localtime( &now );

	std::cout << "[" << 1900 + ltm->tm_year; 
	if ( ltm->tm_mon > 9 )
		std::cout << ltm->tm_mon;
	else
		std::cout << 0 << ltm->tm_mon;
	if ( ltm->tm_mday > 9 )
		std::cout << ltm->tm_mday;
	else
		std::cout << 0 << ltm->tm_mday;
	if ( ltm->tm_hour > 9 )
		std::cout << "_" << ltm->tm_hour;
	else
		std::cout << "_0" << ltm->tm_hour;
	if ( ltm->tm_min > 9 )
		std::cout << ltm->tm_min;
	else
		std::cout << 0 << ltm->tm_min;
	if ( ltm->tm_sec > 9 )
		std::cout << ltm->tm_sec;
	else
		std::cout << 0 << ltm->tm_sec;
	std::cout << "] ";
}

Account::Account( int initial_deposit ) {

	_displayTimestamp();
	_amount = initial_deposit;
	std::cout << YEL << "index:" << _nbAccounts << ";amount:" << _amount << ";created" << CRESET << std::endl;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	return ;
}

Account::Account( const Account &ref ) {

	_nbAccounts = ref._nbAccounts;
	_totalAmount = ref._totalAmount;
	_totalNbDeposits = ref._totalNbDeposits;
	_totalNbWithdrawals = ref._totalNbWithdrawals;
	return ;
}

Account::~Account ( void ) {

	_displayTimestamp();
	std::cout << MAG << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << CRESET << std::endl;
	return ;
}

int		Account::getNbAccounts( void ) {

	return ( _nbAccounts );
}

int		Account::getTotalAmount( void ) {

	return ( _totalAmount );
}

int		Account::getNbDeposits( void ) {

	return ( _totalNbDeposits );
}

int		Account::getNbWithdrawals( void ) {

	return ( _totalNbWithdrawals );
}

void	Account::displayAccountsInfos( void ) {

	tm		time;
	
	_displayTimestamp();
	
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << getNbDeposits() << ":withdrawal;" << getNbWithdrawals() << std::endl;
}

void    Account::makeDeposit( int deposit ) {

	_displayTimestamp();
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits += 1;
	_totalNbDeposits++;
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {

	if ( _amount - withdrawal > 0 ) {

		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals += 1;
		_totalNbWithdrawals++;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawal:" << _nbWithdrawals << std::endl;
		_accountIndex++;
		return ( true );
	}
	else {

		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
		_accountIndex++;
		return ( false );
	}
}

int		Account::checkAmount( void ) const {
	
	return ( _amount );
}

void	Account::displayStatus( void ) const {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}