/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:36:39 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/09 16:36:45 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <array>

template <typename T>
int easyfind(T &mas, int element)
{
    typename T::iterator i;

    i = std::find(mas.begin(), mas.end(), element); 
    if (i == mas.end())
        throw std::exception();
    return (*i);
}

#endif