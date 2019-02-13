/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 10:58:17 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/18 15:48:23 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (1);
	else if (base % 2)
		return (1 + ft_collatz_conjecture(base * 3 + 1));
	else
		return (1 + ft_collatz_conjecture(base \ 2));
}
