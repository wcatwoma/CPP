/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 22:31:03 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/05 23:00:07 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const &name, int gradeSign, int gradeExecute):
    name(name),
    signedState(false),
    gradeSign(gradeSign),
    gradeExecute(gradeExecute)
{
    if (gradeSign < 1 || gradeExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() {}

Form::Form(const Form &form) :
    name(form.name),
    signedState(false),
    gradeSign(form.gradeSign),
    gradeExecute(form.gradeExecute)
{}

Form &Form::operator=(const Form &form)
{
    this->signedState = form.signedState;
    return (*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high exception!");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low exception!");
}

std::string const &Form::getName() const
{
    return (this->name);
}

bool                Form::isSigned() const
{
    return (this->signedState);
}

int                 Form::getGradeSign() const
{
    return (this->gradeSign);
}

int                 Form::getGradeExecute() const
{
    return (this->gradeExecute);
}

void                Form::beSigned(Bureaucrat const &bureaucrat)
{
    if (bureaucrat.getGrade() > this->gradeSign)
		throw Form::GradeTooLowException();
    this->signedState = true;
}

std::ostream        &operator<<(std::ostream &out, Form const &form)
{
    out << "Name: " << form.getName();
    out << ", Signed: " << form.isSigned();
    out << ", GradeSign: " << form.getGradeSign();
    out << ", GradeExecute: " << form.getGradeExecute() << std::endl;
    return (out);
}