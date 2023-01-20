/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:49:51 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/04 22:49:56 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {

public:

	Brain();
	Brain(const Brain &other);
	~Brain();
	Brain& operator=(const Brain& other);

	void setFirstIdea(const std::string firstIdea);
	std::string getFirstIdea() const;

private:

	std::string ideas[100];

};

#endif