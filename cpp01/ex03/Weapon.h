/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:26:08 by anaouali          #+#    #+#             */
/*   Updated: 2024/10/03 17:13:18 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon{

private:
    std::string type;
public:    
    Weapon();
    ~Weapon();
    Weapon(const std::string name);
    const std::string getType();
    void setType(std::string newType);
};

#endif