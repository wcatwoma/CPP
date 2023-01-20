/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    HumanB.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 05:15:08 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/01/28 05:35:11 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = 0;
}

void    HumanB::attack(void)
{
    std::cout << this->name << " attacks with his ";
    std::cout << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

HumanB::~HumanB(void)
{
    
}
