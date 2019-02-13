/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 12:26:48 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/17 16:38:28 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		calc_nb_words(char *str, int *size_word)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			word++;
		while (str[i] != ' ')
		{
			size_word[word - 1] = size_word[word - 1] + 1;
			i++;
		}
		while (str[i] == ' ')
			i++;
	}
	return (word);
}

void	**ft_split_whitespaces(char *str)
{
	int		nb_words;
	int		tab[10];
	char	*temp;
	char	*string;
	int		i;

	i = 0;
	nb_words = calc_nb_words(str, tab);
	string = (char*)malloc(sizeof(*string) * (nb_words + 1));
	while (i < nb_words)
	{
		string[i] = (char*)malloc(sizeof(char) * (tab[i] + 1));
		i++;
	}
}
