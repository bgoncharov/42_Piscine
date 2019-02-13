/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 21:39:19 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/17 22:55:35 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *a;
	int i;
	int size;

	if (min >= max)
		return (NULL);
	size = (max - min) + 1;
	a = (int *)malloc(sizeof(int) * size);
	i = 0;
	while (size--)
	{
		a[i] = min;
		min += 1;
		++i;
	}
	return (a);
}
