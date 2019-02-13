/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 22:04:51 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/17 22:56:03 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*a;
	int		i;
	int		size;

	if (min > max)
		return (0);
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

int		ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
