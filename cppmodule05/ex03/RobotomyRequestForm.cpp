/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 22:34:09 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/05 23:48:01 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
    Form("RobotomyRequestForm", 72, 45),
    target(target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm):
    Form(robotomyRequestForm),
    target(robotomyRequestForm.target)
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &)
{
    return (*this);
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    std::cout << "BRBRBRBRBRBRBRBRBRBR" << std::endl;
    std::cout << this->target << (rand() % 2 ?
        " has been robotomized successfully" : 
        " robotomization is a failure") << std::endl;
}