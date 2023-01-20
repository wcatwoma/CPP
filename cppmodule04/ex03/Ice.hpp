/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 23:07:39 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/04 23:08:15 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: virtual public AMateria
{
private:

public:
    Ice();
    ~Ice();
    AMateria*   clone() const;
    void        use(ICharacter &);

    Ice(const Ice &ice);
    Ice &operator=(const Ice &ice);
};

#endif
