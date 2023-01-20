/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 05:52:55 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/01/28 05:52:57 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void) {
	std::string command;
	Karen karen;

	do {
		std::cin >> command;
		karen.complain(command);
	} while (command.compare("EXIT"));
	std::cout << "Have a good day!" << std::endl;
	return 0;
}
