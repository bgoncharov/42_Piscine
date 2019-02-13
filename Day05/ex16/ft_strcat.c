/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 19:20:01 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/15 20:42:35 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
		x = x + 1;
	while (src[y] != '\0')
	{
		dest[x + y] = src[y];
		y++;
	}
	return (dest);
}