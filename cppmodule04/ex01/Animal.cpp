/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:47:39 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/04 22:47:48 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal constructor has been called!" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type) {}

Animal::~Animal() {
	std::cout << "Animal destructor has been called!" << std::endl;
}

Animal& Animal::operator=(const Animal &other) {
	if (this != &other)
		type = other.type;
	return *this;
}

std::string Animal::getType() const {
	return type;
}

void Animal::setType(std::string value) {
	type = value;
}

 void Animal::makeSound() const {
	std::cout << "???" << std::endl;
}
