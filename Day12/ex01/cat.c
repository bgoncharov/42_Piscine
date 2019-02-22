/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 12:06:21 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/24 16:14:46 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define SIZE 4096

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int is_nothing(int argc)
{
	char c;
	if (argc == 1)
	{
		while (read(0, &c, 1))
			write(1, &c, 1);
		return (1);
	}
	return (0);
}

void is_dir(char *str)
{
	ft_putstr("cat: ");
	ft_putstr(str);
	ft_putstr(": Is a directory\n");
}

void no_name(char *str)
{
	ft_putstr("cat: ");
	ft_putstr(str);
	ft_putstr(": No such file or directory\n");
}

int main(int argc, char **argv)
{
	int z;
	int i;
	int cont;
	char buffer[SIZE + 1];

	if (is_nothing(argc))
		return (0);
	i = 1;
	while (i < argc)
	{
		z = open(argv[1], O_RDWR);
		if (errno == 2)
			no_name(argv[i]);
		else if (errno == 21)
			is_dir(argv[i]);
		else
			while ((cont = read(z, buffer, SIZE)))
					{
						buffer[cont] = '\0';
						write(1, buffer, cont);
					}
		close(z);
		i++;
	}
	return (errno);
}
