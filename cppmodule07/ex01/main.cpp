/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 00:01:59 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/08 00:06:50 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>

int main() {

	int intArr[3] = {1, 2, 3};
	int lenI = static_cast<int>(sizeof(intArr)/sizeof(intArr[0]));
	iter(intArr, lenI, addFive);
	for(int i = 0; i < lenI; i++)
		std::cout << intArr[i];
	std::cout << std::endl;

	char string[] = "abcdef";
	int lenS = static_cast<int>(sizeof(string)/sizeof(string[0]));
	iter(string, lenS, addFive);
	std::cout << string << std::endl;

	return 0;

}
