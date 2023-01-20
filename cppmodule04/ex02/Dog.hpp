/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:42:38 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/04 22:54:08 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

public:

	Dog();
	Dog(const Dog& other);
	virtual ~Dog();
	Dog& operator=(const Dog& other);

	void makeSound() const;

private:

	Brain *brain;

};

#endif