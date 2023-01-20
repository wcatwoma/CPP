/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 23:08:59 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/04 23:08:59 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource: public IMateriaSource
{
private:
    int     count_materia;
    AMateria *sources[4];

    void fillNull(void);
    void fill(const MateriaSource &materiasource);

public:
    MateriaSource();
    ~MateriaSource();
    void        learnMateria(AMateria*);
    AMateria*   createMateria(std::string const & type);

    MateriaSource(const MateriaSource &materiasource);
    MateriaSource &operator=(const MateriaSource &materiasource);
};

#endif