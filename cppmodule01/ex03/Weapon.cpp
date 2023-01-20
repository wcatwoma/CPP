/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 05:15:44 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/01/28 05:35:36 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

std::string Weapon::getType(void)
{
    return (this->type);
}

void        Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::~Weapon()
{
    
}
