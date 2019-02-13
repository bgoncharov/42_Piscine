/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 08:52:24 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/16 13:26:12 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int z;
	int j;

	j = 1;
	while (argc > j)
	{
		z = 0;
		while (argv[j][z] != '\0')
		{
			ft_putchar(argv[j][z]);
			z += 1;
		}
		j += 1;
		ft_putchar('\n');
	}
	return (0);
}
