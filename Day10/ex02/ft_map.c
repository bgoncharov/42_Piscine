/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 09:24:42 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/21 22:21:57 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int lenght, int (*f)(int))
{
	int x;
	int *res;

	res = (int*)malloc(sizeof(int) * lenght);
	x = 0;
	while (x < lenght)
	{
		res[x] = (*f)(tab[x]);
		++x;
	}
	return (res);
}
