/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 02:41:45 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/01/28 02:50:13 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int     main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << std::setw(30) << "Address of string: " << std::setw(20) << &str << std::endl;
	std::cout << std::setw(30) << "String pointer: " << std::setw(20) << stringPTR << std::endl;
	std::cout << std::setw(30) << "String reference: " << std::setw(20) << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << std::setw(30) << "Value of string by pointer: " << std::setw(22) << *stringPTR << std::endl;
	std::cout << std::setw(30) << "Value of string by reference: " << std::setw(22) << stringREF << std::endl;
}
