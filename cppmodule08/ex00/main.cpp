/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:37:23 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/09 16:37:26 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <set>

#include "easyfind.hpp"

int main(void)
{
	std::array<int, 4> a = {0, 1, 2, 3};

	for (int i = 0; i <= 8; i++)
	{
		try
		{
			std::cout << "Result: " << easyfind(a, i) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Not find " << i << std::endl;
		}
	}
}
