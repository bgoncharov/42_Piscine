/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 09:13:36 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/18 09:47:34 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 P.M.\n",
				hour, hour + 1);
	else if (hour == 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 A.M.\n",
				hour + 12, hour + 1);
	else if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 P.M.\n",
				hour, hour + 1 - 12);
	else if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 A.M.\n",
				hour - 12, hour + 1 - 12);
	else if (hour == 24)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 A.M.\n",
				hour - 12, hour + 1 - 24);
	else if (hour < 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 A.M.\n",
				hour, hour + 1);
	else
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 P.M.\n",
				hour - 12, hour + 1 - 12);
}
