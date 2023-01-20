/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 05:15:28 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/01/28 05:38:26 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    Weapon *weapon;
    std::string name;

public:
    HumanB(std::string name);
    void    attack(void);
    void    setWeapon(Weapon &weapon);
    ~HumanB(void);
};

#endif
