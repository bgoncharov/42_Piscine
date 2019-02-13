/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 13:28:08 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/16 19:37:51 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int main(int argc, char *argv[])
{
	int z;
	int j;

	if (argc > 1)
	{
		z = argc - 1;
		while (z >= 1)
		{
			j = 0;
			while (argv[z][j] != '\0')
			{
				ft_putchar(argv[z][j]);
				++j;
			}
			ft_putchar('\n');
			--z;
		}
	}
	return (0);
}
