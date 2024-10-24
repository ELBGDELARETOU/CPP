/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:47:46 by anaouali          #+#    #+#             */
/*   Updated: 2024/10/24 14:41:08 by anaouali         ###   ########.fr       */
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
    std::cout << "accounts:"<< getNbAccounts();
    std::cout << " total:"<< getTotalAmount();
    std::cout << " deposits:" <<getNbDeposits();
    std::cout << " whithdrawals:" <<getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit){
    static int i = 0;
    Account::_amount = initial_deposit;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _nbAccounts ++;
    std::cout << "index:" << i++ << " amount:" << initial_deposit << ";" << "created" << std::endl;
}

Account::~Account(){
}

void	Account::makeDeposit( int deposit ){
    static int i = 0;
    _nbDeposits += 1;
    _totalAmount += 1;
    std::cout << "index:" << i++;
    std::cout << " p_amount:"<< _amount;
    std::cout << " deposits:"<< deposit;
    _amount += deposit;
    std::cout << " amount:" << _amount;
    std::cout << " nb_deposits:" << _nbDeposits << std::endl;
}

// bool	makeWithdrawal( int withdrawal ){
    
// }

// int		checkAmount( void ) {
    
// }

void	Account::displayStatus( void ) const{
    std::cout << "amount:"<<_amount;
    std::cout << " deposit:"<<_nbDeposits;
    std::cout << " withdrawls:"<<_nbWithdrawals << std::endl;
}