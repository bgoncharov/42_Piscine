# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/21 08:53:37 by bogoncha          #+#    #+#              #
#    Updated: 2019/01/22 22:24:33 by bogoncha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB_NAME = libft.a
SRCS_FILES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
HEADERS = includes
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: build_lib

build_lib:
	gcc -I $(HEADERS) -c $(SRCS_FILES)
	ar -rv $(LIB_NAME) $(OBJ)
	ranlib $(LIB_NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(LIB_NAME)

re: fclean all
