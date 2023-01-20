/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:58:02 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/04 23:11:32 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: virtual public AMateria
{
private:

public:
    Cure();
    ~Cure();
    AMateria*   clone() const;
    void        use(ICharacter &);

    Cure(Cure const &cure);
    Cure &operator=(Cure &cure);
};

#endif