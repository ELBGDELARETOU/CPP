/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:47:46 by anaouali          #+#    #+#             */
/*   Updated: 2024/10/25 16:29:32 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(){
    return (_nbAccounts);
}

int	Account::getTotalAmount(){
    return (_totalAmount);
}

int	Account::getNbDeposits(){
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( ){
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ){
    _displayTimestamp();
    std::cout << " accounts:"<< getNbAccounts();
    std::cout << ";total:"<< getTotalAmount();
    std::cout << ";deposits:" <<getNbDeposits();
    std::cout << ";whithdrawals:" <<getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit){
    static int i = 0;
    _accountIndex = 0;
    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _nbAccounts ++;
    _accountIndex = i++;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
}

Account::~Account(){
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit ){
    _nbDeposits += 1;
    _totalAmount += deposit;
    _totalNbDeposits ++;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";p_amount:"<< _amount;
    std::cout << ";deposits:"<< deposit;
    _amount += deposit;
    std::cout << ";amount:" << _amount;
    std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
    
}

bool	Account::makeWithdrawal( int withdrawal ){
    _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    if (_amount < withdrawal){
        std::cout << ";withdrawal:refused" << std::endl;
    }
    else{
        _nbWithdrawals += 1;
        _totalNbWithdrawals += 1;
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        std::cout << ";amount:" << withdrawal;
        std::cout << ";withdrawal:" << _amount;
        std::cout << ";nb_withrawal:" << _nbWithdrawals << std::endl;    
    }
    return (true);
}

int		Account::checkAmount( void ) const{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";deposits:" << _nbDeposits;
    std::cout << ";withdrawal:" << _nbWithdrawals << std::endl;
    return (0);
}

void	Account::displayStatus( void ) const{
    checkAmount();
}

void	Account::_displayTimestamp()
{
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", now);
    std::cout << buffer;
}