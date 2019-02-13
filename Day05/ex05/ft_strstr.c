/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 14:37:56 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/15 12:30:51 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int x;
	int y;

	x = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[x] != '\0')
	{
		y = 0;
		while (to_find[x + y] != '\0' && str[x + y] == to_find[y])
		{
			if (to_find[y + 1] == '\0')
				return (&str[x]);
			++y;
		}
		++x;
	}
	return (0);
}
