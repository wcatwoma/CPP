/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:19:51 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/03 23:23:05 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
    ScavTrap lehaNavalniy = ScavTrap("Leha");
    ScavTrap petutin = ScavTrap("petutin");

    lehaNavalniy.attack(petutin.getName());
    petutin.takeDamage(lehaNavalniy.getAttackDamage());
    petutin.attack(lehaNavalniy.getName());
    lehaNavalniy.takeDamage(petutin.getAttackDamage());
    lehaNavalniy.beRepaired(lehaNavalniy.getEnergyPoints());
    lehaNavalniy.guardGate();


    return 0;
}
