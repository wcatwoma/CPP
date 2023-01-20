/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:47:32 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/03 23:54:35 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    FragTrap one("wcatwoma");
    ScavTrap two("lexa");

    srand(time(NULL));
    one.meleeAttack("cpp03");
    one.rangedAttack("cpp03");
    one.takeDamage(21);
    one.beRepaired(42);
    one.takeDamage(2);
    one.takeDamage(50);
    one.takeDamage(50);
    one.takeDamage(50);
    one.beRepaired(42);
    one.vaulthunter_dot_exe("cpp03");
    one.vaulthunter_dot_exe("cpp03");
    one.vaulthunter_dot_exe("cpp03");
    one.vaulthunter_dot_exe("cpp03");
    one.vaulthunter_dot_exe("cpp03");

    std::cout << std::endl;

    two.meleeAttack("wcatwoma");
    two.rangedAttack("wcatwoma");
    two.takeDamage(21);
    two.beRepaired(42);
    two.takeDamage(2);
    two.takeDamage(50);
    two.takeDamage(50);
    two.takeDamage(50);
    two.beRepaired(42);
    two.challengeNewcomer("wcatwoma");
    two.challengeNewcomer("wcatwoma");
    two.challengeNewcomer("wcatwoma");
    two.challengeNewcomer("wcatwoma");
    two.challengeNewcomer("wcatwoma");
    return (0);
}
