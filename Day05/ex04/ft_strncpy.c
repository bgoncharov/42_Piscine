/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 13:42:00 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/15 12:27:20 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int z;

	z = 0;
	while (src[z] != '\0' && z < n)
	{
		dest[z] = src[z];
		++z;
	}
	if (z < n && src[z] == '\0')
	{
		while (dest[z] != '\0')
		{
			dest[z] = '\0';
			++z;
		}
	}
	return (dest);
}
