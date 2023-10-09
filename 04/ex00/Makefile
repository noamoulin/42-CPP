# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: noa <noa@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/29 03:13:15 by noa               #+#    #+#              #
#    Updated: 2023/09/29 03:29:04 by noa              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main Animal Cat Dog WrongAnimal WrongCat
OBJS = $(addsuffix .o, $(SRCS))

CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = animals

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