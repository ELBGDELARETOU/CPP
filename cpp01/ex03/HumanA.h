/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:31:27 by anaouali          #+#    #+#             */
/*   Updated: 2024/09/30 14:51:23 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>

class HumanA{

private:
    std::string weapon;
    std::string name;
public:
    void attack();
    HumanA(std::string weapon);
    ~HumanA();
};

void HumanA::attack()
{
    std::cout << this->name << "attacks with their" << this->weapon << std::endl;
}

HumanA::HumanA(std::string weapon)
{
}

HumanA::~HumanA()
{
}


#endif