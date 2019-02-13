/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 20:56:45 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/17 19:16:53 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n])
		n += 1;
	return (n);
}

char	*ft_strdup(char *src)
{
	char	*dst;
	int		x;

	x = -1;
	if (!src || !(dst = (char*)malloc(sizeof(char) * ft_strlen(src))))
		return (0);
	while (src[++x])
		dst[x] = src[x];
	dst[x + 1] = '\0';
	return (dst);
}
