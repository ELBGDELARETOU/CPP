/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:58:55 by anaouali          #+#    #+#             */
/*   Updated: 2024/09/26 15:19:16 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void Zombie::annouce(){
    std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

// Zombie::Zombie(){
//     std::cout << "Constructur called" << std::endl;
// }

// Zombie::~Zombie(){
//     std::cout << "Destructor called on : " << Zombie::name << std::endl;
// }