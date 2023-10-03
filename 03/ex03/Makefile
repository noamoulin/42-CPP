# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: noa <noa@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/22 01:29:38 by noa               #+#    #+#              #
#    Updated: 2023/06/22 22:41:43 by noa              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ClapTrap ScavTrap FragTrap DiamondTrap main
OBJS = $(addsuffix .o, $(SRCS))

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ++war

%.o : %.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all : $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all