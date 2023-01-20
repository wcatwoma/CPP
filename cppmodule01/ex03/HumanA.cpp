/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 05:14:23 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/01/28 05:34:45 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
    this->name = name;
}

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with his ";
    std::cout << this->weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{

}
