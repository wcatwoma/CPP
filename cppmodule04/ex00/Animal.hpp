/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:41:58 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/04 22:41:59 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {

public:

	Animal();
	Animal(const Animal &other);
	virtual ~Animal();
	Animal& operator=(const Animal &other);

	std::string getType() const;
	void setType(std::string value);

	virtual void makeSound() const;

protected:

	std::string type;

};

#endif