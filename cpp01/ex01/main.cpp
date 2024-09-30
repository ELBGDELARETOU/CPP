/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:18:07 by anaouali          #+#    #+#             */
/*   Updated: 2024/09/30 12:55:18 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(int argc, char **argv){

    Zombie *pol;
    int i = 0;
    
    if (argc != 3)
        return (std::cout << "ERORR : please input a number of Zombies and Zombie name" << std::endl, 0);

    pol = zombieHorde(atoi(argv[1]), argv[2]);
    while (i < atoi(argv[1])){
        pol[i].annouce();
        i++;
    }
    delete[] pol;
}
