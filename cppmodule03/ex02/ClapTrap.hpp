/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:47:06 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/03 23:51:51 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
    int                 hitPoints;
    int                 maxHitPoints;
    int                 energyPoints;
    int                 maxEnergyPoints;
    int                 level;
    std::string         name;
    int                 meleeAttackDamage;
    int                 rangedAttackDamage;
    int                 armorDamageReduction;

    ClapTrap();

public:
    ClapTrap(std::string name);
    void    rangedAttack(std::string const &target);
    void    meleeAttack(std::string const &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    ~ClapTrap(void);
};

#endif
