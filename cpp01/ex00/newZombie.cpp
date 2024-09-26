/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:10:07 by anaouali          #+#    #+#             */
/*   Updated: 2024/09/25 15:36:09 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* newZombie(std::string name){
    
    Zombie* zombie = new Zombie(); 
    std::string input;
    
    std::cout << "Enter a Zombie name : " << std::endl;
    std::getline(std::cin, input);
    zombie->setName(input);
    return (zombie);
    
}
