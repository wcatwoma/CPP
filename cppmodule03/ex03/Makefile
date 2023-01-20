# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgreenbl <bgreenbl@student.21-school.      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 11:10:31 by bgreenbl          #+#    #+#              #
#    Updated: 2022/02/02 22:05:18 by bgreenbl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex03

SRC		=	main.cpp	\
			ClapTrap.cpp\
			ScavTrap.cpp\
			FragTrap.cpp\
			DiamondTrap.cpp

OBJ		=	$(SRC:.cpp=.o)
DEP		=	$(SRC:.cpp=.d)

CXXFLAGS=	-std=c++98 -Wall -Werror -Wextra -MMD

all		:	$(NAME)

$(NAME)	:	$(OBJ)
	c++ $(OBJ) -o $@

%.o		:	%.cpp
	c++	$(CXXFLAGS) -c $< -o $@

clean	:
	rm -f $(OBJ) $(DEP)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re

-include $(DEP)

