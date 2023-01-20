/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 02:18:34 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/01/28 03:12:02 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <stdlib.h>

class Zombie 
{

public:

	void announce(void) const;
	void setName(std::string name);

	Zombie(void);
	~Zombie(void);

private:

	std::string _name;

};

void randomChump(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif
