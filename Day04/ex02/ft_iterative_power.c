/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:11:38 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/12 21:51:15 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int res;

	res = nb;
	if (power == 0)
		return (1);
	if (power < 0 || power >= 31)
		return (0);
	else
	{
		while (power-- > 1)
		{
			res *= nb;
		}
	}
	return (res);
}
