/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 02:20:03 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/01/28 03:12:57 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) 
{
	int n = 5;

	Zombie *horde = zombieHorde(n, "brooooo");
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}