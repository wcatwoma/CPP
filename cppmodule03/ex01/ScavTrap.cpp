/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:19:28 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/03 23:23:10 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout	<< "ScavTrap constructor has been called for "
    			<< name << "!" << std::endl;
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
};
ScavTrap::~ScavTrap() {
    std::cout	<< "ScavTrap destructor has been called for "
    			<< getName() << "!" << std::endl;
}

void ScavTrap::attack(const std::string target) {
    std::cout << "ScavTrap " << getName() << " attacks "
              << target << ", causing " << getAttackDamage()
              << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout	<< "ScavTrap " << getName()
    			<< " have enterred in Gate keeper mode!" << std::endl;
}
