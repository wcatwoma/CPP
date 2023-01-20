/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 22:58:46 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/03 22:58:52 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) 
{
    ClapTrap georgeBush = ClapTrap("George Bush");
    ClapTrap saddamHussein = ClapTrap("Saddam Hussein");

    saddamHussein.attack(georgeBush.getName());
    georgeBush.takeDamage(saddamHussein.getAttackDamage());
    georgeBush.attack(saddamHussein.getName());
    saddamHussein.takeDamage(georgeBush.getAttackDamage());
    georgeBush.beRepaired(georgeBush.getEnergyPoints());

    return 0;
}
