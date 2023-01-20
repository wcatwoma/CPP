/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 00:03:30 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/08 00:12:00 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void swap(T& fir, T& sec) {
	T tmp = fir;
	fir = sec;
	sec = tmp;
}

template<typename T>
T& min(T& fir, T& sec) {
	if (fir < sec)
		return fir;
	if (sec < fir)
		return sec;
	else
		return sec;
}

template<typename T>
T& max(T& fir, T& sec) {
	if (fir > sec)
		return fir;
	if (sec > fir)
		return sec;
	else
		return sec;
}

#endif
