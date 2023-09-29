# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: noa <noa@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/22 01:29:38 by noa               #+#    #+#              #
#    Updated: 2023/06/22 01:31:00 by noa              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = megaphone
OBJS = $(addsuffix .o, $(SRCS))

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = megaphone

%.o : srcs/%.cpp
	$(CC) -c $(CFLAGS) $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all : $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all