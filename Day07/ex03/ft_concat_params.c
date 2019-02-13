/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 23:42:31 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/17 19:21:27 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		x;
	int		y;
	int		w;
	int		z;
	char	*pointer;

	x = 1;
	z = 0;
	while (x < argc)
		z = ft_strlen(argv[x++]) + 1;
	pointer = (char*)malloc(sizeof(*pointer) * z);
	x = 1;
	y = 0;
	w = 0;
	while (argv[x])
	{
		while (argv[x][w] != '\0')
			pointer[y++] = argv[x][w++];
		pointer[y++] = '\n';
		w = 0;
		x++;
	}
	pointer[y - 1] = '\0';
	return (pointer);
}
