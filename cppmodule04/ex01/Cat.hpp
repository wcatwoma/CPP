/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:42:19 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/04 22:51:21 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

public:

	Cat();
	Cat(const Cat& other);
	virtual ~Cat();
	Cat& operator=(const Cat &other);

	void makeSound() const;

	void captureFirstIdea(const std::string firstIdea);
	std::string revealFirstIdea() const;

private:

	Brain* brain;

};

#endif