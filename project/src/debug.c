/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 12:08:11 by nhuber            #+#    #+#             */
/*   Updated: 2016/03/09 12:10:40 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	debug_coordinates(unsigned int t)
{
	int		i;
	int		n;
	char	c;

	i = 7;
	n = 0;
	while (i >= 0)
	{
		if (i % 2)
			c = 'x';
		else
			c = 'y';
		ft_putchar(c);
		ft_putnbr(n);
		ft_putstr(": ");
		ft_putnbr(ft_bitgetfour(t, i));
		if (!(i % 2))
			ft_putchar('\n');
		else
			ft_putstr("   ----   ");
		n++;
		i--;
	}
}
