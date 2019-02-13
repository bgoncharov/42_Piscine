/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 10:37:25 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/18 15:47:57 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ultimator.h>
#include <stdlib.h>

void ft_destroy(char ***factory)
{
	int m;
	int z;

	m = 0;
	z = 0;
	while (factory[m])
	{
		while (factory[m][z])
		{
			free(facroty[m][z]);
			z++;
		}
		free(factory[m]);
		m++;
	}
	free(factory);
}
