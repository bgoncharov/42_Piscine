/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 08:13:54 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/23 20:04:41 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new;
	t_list	*list;

	if (begin_list == NULL)
		return ;
	if ((list = ft_create_elem(data)) == NULL)
		return ;
	if (*begin_list == NULL)
		*begin_list = list;
	else
	{
		new = *begin_list;
		while (new->next != NULL)
			new = new->next;
		new->next = list;
	}
}
