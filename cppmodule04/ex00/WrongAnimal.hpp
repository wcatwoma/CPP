/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:43:10 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/04 22:43:12 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {

public:

	WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	~WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal &other);

	std::string getType() const;
	void setType(std::string value);

	void makeSound() const;

protected:

	std::string type;

};

#endif