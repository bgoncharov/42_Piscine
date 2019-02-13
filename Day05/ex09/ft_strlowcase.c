/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowercase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 22:16:17 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/15 12:41:59 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int z;

	z = 0;
	while (str[z] != '\0')
	{
		if (str[z] >= 'A' && str[z] <= 'Z')
			str[z] += 32;
		++z;
	}
	return (str);
}