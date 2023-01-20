/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:32:55 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/04 22:51:55 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void) {

	std::cout << "----------Constructors----------" << std::endl;

	Animal *a = new Dog();
	Animal *b = new Dog();
	Animal *c = new Cat();
	Animal *d = new Cat();

	Animal *animals[4] = {a, b, c, d};

	std::cout << "----------Speak out----------" << std::endl;

	for (int i = 0; i < 4; i++) {
		animals[i]->makeSound();
	}

	std::cout << "----------Creation of test Cats----------" << std::endl;

	Cat e;
	Cat f;

	std::cout << "----------Deep copy confirmation----------" << std::endl;

	e = f;
	e.captureFirstIdea("eat hands");
	std::cout	<< "The first idea of 'e' is "
				<< e.revealFirstIdea() << std::endl;
	std::cout	<< "The first idea of 'a' is "
				<< f.revealFirstIdea() << std::endl;

	std::cout << "----------Destructors----------" << std::endl;

	for (int i = 0; i < 4; i++) {
		delete animals[i];
	}

	return 0;
}
