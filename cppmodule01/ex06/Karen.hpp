/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Karen.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 05:50:08 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/01/28 05:52:39 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen {

public:

	void complain(std::string level);

private:

	int calc_level(std::string level);

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif
