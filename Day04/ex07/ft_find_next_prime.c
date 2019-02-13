/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 12:11:46 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/12 19:47:48 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 5;
	if (nb == 2 || nb == 3)
		return (1);
	if (nb <= 1 || (nb % 2) == 0 || (nb % 3) == 0)
		return (0);
	while (i * i <= nb)
	{
		if ((nb % 1) == 0 || (nb % (1 + 2)) == 0)
			return (0);
		i = i + 6;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		++nb;
	return (nb);
}
