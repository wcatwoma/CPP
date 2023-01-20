/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 05:39:22 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/01/28 05:50:48 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen {

public:

	Karen(void);
	void complain(std::string level);

	typedef void (Karen::*mem_func)(void);
private:

	//void(*func_arr)(void);
	mem_func func_arr[4];
	void init_func_arr(void);
	int calc_level(std::string level);

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif
