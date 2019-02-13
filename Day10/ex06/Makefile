# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/22 12:47:21 by bogoncha          #+#    #+#              #
#    Updated: 2019/01/22 13:38:30 by bogoncha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRCS = src/ft_atoi.c src/ft_putnbr.c
CC = gcc
CFLAGC = -Wall -Wextra -Werror

all:
	$(CC) $(CFLAGC) -o $(NAME)  main.c $(SRCS)

clean:
	/bin/rm -f $(NAME)

re: clean all
