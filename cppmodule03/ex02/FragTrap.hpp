/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:47:27 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/03 23:52:19 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#define COUNT_WEAPONS 5

class FragTrap: virtual public ClapTrap
{
private:
    static std::string  weapons[COUNT_WEAPONS];

    FragTrap();

public:
    FragTrap(std::string name);
    void    rangedAttack(std::string const &target);
    void    meleeAttack(std::string const &target);
    void    vaulthunter_dot_exe(std::string const &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    ~FragTrap(void);
};

#endif