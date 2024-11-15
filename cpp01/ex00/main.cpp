/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:18:07 by anaouali          #+#    #+#             */
/*   Updated: 2024/11/07 17:02:45 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// int main(int argc, char **argv){

//     if (argc != 2)
//         return (std::cout << "ERORR : please input a Zombie name" << std::endl, 0);
//     randomChump(argv[1]);

// }

int main(int argc, char **argv){

    Zombie *pol;
    if (argc != 2)
        return (std::cout << "ERORR : please input a Zombie name" << std::endl, 0);

    pol = newZombie(argv[1]);
    pol->annouce();
    delete(pol);
}
