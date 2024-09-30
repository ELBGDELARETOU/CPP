/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:26:08 by anaouali          #+#    #+#             */
/*   Updated: 2024/09/30 14:36:43 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon{

private:
    std::string type;
public:
    const std::string getType(); 
    void setType(std::string newType); 
    Weapon();
    ~Weapon();
};

Weapon::Weapon(){
}

Weapon::~Weapon(){
}

#endif