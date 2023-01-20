/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 22:10:29 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/01/29 22:55:37 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int                 fixed_point;
    static const int    fractional_bits = 8;

public:
    Fixed();
    Fixed(int const fixed_point);
    Fixed(float const value);
    Fixed(const Fixed &fixed);
    ~Fixed(void);

    int             getRawBits(void) const;
    void            setRawBits(int const);
    Fixed           &operator=(const Fixed &);

    float           toFloat(void) const;
    int             toInt(void) const;
};

std::ostream &operator<<(std::ostream &, Fixed const &);

#endif
