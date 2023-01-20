/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 02:18:34 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/01/28 03:05:47 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <stdlib.h>

class Zombie {

public:

	void announce(void) const;
	Zombie* newZombie(std::string name);

	Zombie(std::string name);
	~Zombie(void);

private:

	std::string _name;

};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
