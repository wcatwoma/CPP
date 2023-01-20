/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:51:56 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/01/24 21:07:44 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	print_message(char **argv)
{
	while (*argv)
	{
		while (**argv)
		{
			if (**argv >= 97 && **argv <= 122)
				std::cout << static_cast<char>(**argv - 32);
			else
				std::cout << **argv;
			(*argv)++;
		}
		argv++;
	}
	std::cout << std::endl;
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		print_message(argv + 1);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
