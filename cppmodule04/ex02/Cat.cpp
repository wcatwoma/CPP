/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:42:10 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/04 22:42:11 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat constructor has been called!" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &other) {
	type = other.type;
}

Cat::~Cat() {
	std::cout << "Cat destructor has been called!" << std::endl;
}

Cat& Cat::operator=(const Cat &other) {
	if (this != &other)
		type = other.type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Wiscas" << std::endl;
}