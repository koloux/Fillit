/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 09:30:19 by nhuber            #+#    #+#             */
/*   Updated: 2016/03/10 16:34:14 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"


void	print_result(unsigned int *t)
{
	int		index;
	unsigned int	x;
	unsigned int	y;

	x = 0;
	while (x != (t[0] >> 24))
	{
		y = 0;
		while (y != (t[0] >> 24))
		{
			index = pos_getindex(t, x, y);
			if (index > 0)
			{
				ft_putchar('A' + (index - 1));
				index = 0;
			}
			else
				ft_putchar('.');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}

void	print_error(void)
{
	ft_putstr("error\n");
}

void	print_usage(void)
{
	ft_putstr("usage: ./fillit source_file\n");
}
