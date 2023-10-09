# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/29 03:13:15 by noa               #+#    #+#              #
#    Updated: 2023/10/09 13:56:43 by nomoulin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main AAnimal Cat Dog WrongAnimal WrongCat Brain
OBJS = $(addsuffix .o, $(SRCS))

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = aanimals

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

.PHONY : $(NAME) all clean fclean re