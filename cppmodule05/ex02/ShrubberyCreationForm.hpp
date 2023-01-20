/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 22:34:16 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/05 23:48:36 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
private:
    std::string const           target;
    static std::string const    trees;

public:
    ShrubberyCreationForm(std::string const &target);
    virtual ~ShrubberyCreationForm();

    void execute(Bureaucrat const &executor) const;

    ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &shrubberyCreationForm);
};

#endif