/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:26:08 by anaouali          #+#    #+#             */
/*   Updated: 2024/10/07 15:37:24 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon{

private:
    std::string type;
public:    
    Weapon();
    ~Weapon();
    Weapon(const std::string name);
    const std::string& getType() const;
    void setType(std::string newType);
};

#endif