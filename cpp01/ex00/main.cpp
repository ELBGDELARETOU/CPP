/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:18:07 by anaouali          #+#    #+#             */
/*   Updated: 2024/09/26 15:18:39 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(int argc, char **argv){

    if (argc != 2)
        return (std::cout << "ERORR : arg probleme" << std::endl, 0);
    // Zombie *zombie;
    
    // zombie = newZombie("gerard");
    // Zombie::annouce;
    randomChump(argv[1]);
}