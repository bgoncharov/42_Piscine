/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 18:39:27 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/15 19:11:09 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int z;

	z = 0;
	if (argc)
	{
		while (argv[0][z])
		{
			ft_putchar(argv[0][z]);
			z = z + 1;
		}
		ft_putchar('\n');
	}
}
