/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 22:28:26 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/05 22:59:51 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREUCRAT_HPP
#define BUREUCRAT_HPP

#include <iostream>
#include "Form.hpp"
class Form;

class Bureaucrat
{
private:
    std::string name;
    int         grade;

public:
    Bureaucrat(std::string const &name, int grade);
    ~Bureaucrat();

    class GradeTooHighException: public std::exception {
		const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		const char* what() const throw();
	};

    std::string const   &getName() const;
    int                 getGrade() const;
    void                raise_grade();
    void                reduce_grade();
    void                signForm(Form &form) const;

    Bureaucrat(const Bureaucrat &bureaucrat);
    Bureaucrat &operator=(const Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif