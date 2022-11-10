# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 15:48:53 by amontalb          #+#    #+#              #
#    Updated: 2022/11/10 13:56:35 by amontalb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : clean fclean all re

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(shell find . -type f -name 'ft_*.c')
OBJS = $(SRCS:.c=.o)
HEADERS = libft.h
LIB = ar rc


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADERS)
	
	
all : $(NAME)

$(NAME) : $(OBJS)
		$(LIB) $(NAME) $(OBJS)
		

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(Name)

re : fclean $(NAME)
