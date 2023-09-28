# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: noa <noa@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/31 14:38:15 by noa               #+#    #+#              #
#    Updated: 2023/09/28 01:15:50 by noa              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = Fixed main
OBJS = $(addsuffix .o, $(SRCS))

CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = fixed

%.o : srcs/%.cpp
	$(CXX) -c $(CFLAGS) $< -o $@

$(NAME) : $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

all : $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all