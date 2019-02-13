/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 13:07:54 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/22 14:30:29 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "incl/ft_ft.h"

void	do_op(char *argv[])
{
	if (argv[2][0] == '+')
		ft_putnbr((ft_atoi(argv[1])) + (ft_atoi(argv[3])));
	else if (argv[2][0] == '-')
		ft_putnbr((ft_atoi(argv[1])) - (ft_atoi(argv[3])));
	else if (argv[2][0] == '*')
		ft_putnbr((ft_atoi(argv[1])) * (ft_atoi(argv[3])));
	else if (argv[2][0] == '/')
		ft_putnbr((ft_atoi(argv[1])) / (ft_atoi(argv[3])));
	else if (argv[2][0] == '%')
		ft_putnbr((ft_atoi(argv[1])) % (ft_atoi(argv[3])));
	else if (argv[2][0] == '=')
		ft_putnbr(1);
	else
		write(1, "0", 1);
}

int		main(int argc, char *argv[])
{
	if (argc == 4)
	{
		if (argv[3][0] == '0' && (argv[2][0] == '/'))
			write(1, "Stop : division by zero\n", 24);
		else if (argv[3][0] == '0' && (argv[2][0] == '%'))
			write(1, "Stop : modulo by zero\n", 23);
		else
			do_op(argv);
	}
	write(1, "\n", 1);
	return (0);
}
