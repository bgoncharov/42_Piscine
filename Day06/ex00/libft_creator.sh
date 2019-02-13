# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/15 14:47:01 by bogoncha          #+#    #+#              #
#    Updated: 2019/01/15 18:20:41 by bogoncha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c  && ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.c ft_strlen.o ft_strcmp.o
