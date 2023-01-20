/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 23:45:05 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/05 23:47:51 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string const   target;

public:
    PresidentialPardonForm(std::string const &target);
    virtual ~PresidentialPardonForm();

    void execute(Bureaucrat const &execute) const;

    PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &presidentialPardonForm);
};

#endif