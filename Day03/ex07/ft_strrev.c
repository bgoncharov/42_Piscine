/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 23:34:07 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/11 23:36:46 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count(char *str)
{
	int n;

	n = 0;
	while (*str)
	{
		n++;
		str++;
	}
	return (n);
}

char	*ft_strrev(char *str)
{
	int n;
	int it;
	char *ch;
	
	it = 0;
	if (*str)
	{
		n = count(str);
	}

	while (n != 0)
	{
		ch[it] = str[n];
		n--;
		it++;
	}
	return (ch);
}
