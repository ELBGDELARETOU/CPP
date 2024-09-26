/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:47:46 by anaouali          #+#    #+#             */
/*   Updated: 2024/09/25 11:29:19 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::getNbAccounts(){
    return (_nbAccounts);
}

int	Account::getTotalAmount(){
    return (_totalAmount);
}

int	Account::getNbDeposits(){
    return (_totalAmount);
}

int	Account::getNbWithdrawals( ){
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ){
    
}

Account::Account(){
    Account::_nbAccounts = 0;
    
}

Account::~Account(){
    
}