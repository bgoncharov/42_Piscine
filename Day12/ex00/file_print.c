/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 10:20:52 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/24 10:50:33 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	file_name(char *name)
{
	int file;
	char ch;

	file = open(name, O_RDONLY);
	while (read(file, &ch, sizeof(ch)))
			write (1, &ch, 1);
	close(file);
}

int main(int argc, char *argv[])
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		file_name(argv[1]);
	return (0);
}
