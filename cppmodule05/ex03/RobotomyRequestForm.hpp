/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 22:34:12 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/05 23:48:12 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string const   target;

public:
    RobotomyRequestForm(std::string const &target);
    virtual ~RobotomyRequestForm();

    void    execute(Bureaucrat const &executor) const;

    RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &robotomyRequestForm);
};

#endif