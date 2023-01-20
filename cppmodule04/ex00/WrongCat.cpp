/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:43:19 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/04 22:43:21 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat constructor has been called!" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other) {
	type = other.type;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor has been called!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other) {
	if (this != &other)
		type = other.type;
	return *this;
}