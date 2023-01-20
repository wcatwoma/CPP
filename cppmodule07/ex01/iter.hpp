/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 00:05:22 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/08 00:06:27 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void addFive(T& i) {
	i += 5;
}

template<typename R>
void iter(R adr[], int len, void (func)(R&)) {
	for (int i = 0; i < len; i++)
		func(adr[i]);
}

#endif
