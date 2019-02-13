/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 22:39:33 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/15 12:44:34 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		alpha_or_num(char c)
{
	return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'));
}

char	*ft_strcapitalaze(char *str)
{
	int z;

	z = 0;
	if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] += 'A' - 'a';
		++z;
	}
	while (str[z] != '\0')
	{
		if ((!alpha_or_num(str[z - 1]) && (str[z] >= 'a' && str[z] <= 'z')))
			str[z] -= 32;
		else if (str[z] >= 'A' && str[z] <= 'Z')
			str[z] += 32;
		++z;
	}
	return (str);
}
