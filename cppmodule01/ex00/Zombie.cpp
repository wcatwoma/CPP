/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 02:18:09 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/01/28 03:05:22 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	;
}

Zombie::~Zombie() {
	std::cout << this->_name << " has rotten away!" << std::endl;
}

void Zombie::announce() const {
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
