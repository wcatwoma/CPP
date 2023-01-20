/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:32:38 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/05 22:55:06 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat bureaucrat("bureaucrat", 190);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat bureaucrat("bureaucrat", -1);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat bureaucrat("bureaucrat", 150);
        bureaucrat.reduce_grade();
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat bureaucrat("bureaucrat", 1);
        bureaucrat.raise_grade();
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    Bureaucrat bureaucrat("bureaucrat", 1);
    std::cout << bureaucrat << std::endl;

    return (0);
}