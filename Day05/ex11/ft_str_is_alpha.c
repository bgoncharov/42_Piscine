/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 09:42:50 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/15 12:53:46 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int z;

	z = 0;
	while (str[z] != '\0')
	{
		if ((str[z] < 'a' || str[z] > 'z') &&
				(str[z] < 'A' || str[z] > 'Z'))
			return (0);
		++z;
	}
	return (1);
}