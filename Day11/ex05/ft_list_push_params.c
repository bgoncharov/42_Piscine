/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 21:14:01 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/23 21:59:58 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*head;
	t_list	*traverse_ptr;
	int		i;

	if (ac == 0)
		return (NULL);
	i = 0;
	traverse_ptr = NULL;
	while (i < ac)
	{
		head = ft_create_elem(av[i]);
		head->next = traverse_ptr;
		traverse_ptr = head;
		i++;
	}
	return (head);
}
