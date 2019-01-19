/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 20:19:10 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/10 20:38:24 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	char one;
	char two;
	char three;

	one = '0' - 1;
	while (++one <= '9')
	{
		two = one;
		while (++two <= '9')
		{
			three = two;
			while (++three <= '9')
			{
				ft_putchar(one);
				ft_putchar(two);
				ft_putchar(three);
				if (one != '7' || two != '8' || three != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
