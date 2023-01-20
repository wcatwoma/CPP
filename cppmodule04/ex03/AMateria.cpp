/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:56:07 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/04 22:56:09 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : type(type) {
	std::cout << "AMaterial constructor has been called!" << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMaterial destructor has been called!" << std::endl;
}

const std::string& AMateria::getType() const {
	return type;
}