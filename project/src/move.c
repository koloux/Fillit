/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 09:19:28 by nhuber            #+#    #+#             */
/*   Updated: 2016/03/07 13:47:41 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	move_down(unsigned int *t)
{
	int	x;

	x = 6;
	while (x >= 0)
	{
		ft_bitsetfour(t, ft_bitgetfour(*t, x) + 1, x);
		x -= 2;
	}
}

void	move_up(unsigned int *t)
{
	int	x;

	x = 6;
	while (x >= 0)
	{
		ft_bitsetfour(t, ft_bitgetfour(*t, x) - 1, x);
		x -= 2;
	}
}

void	move_right(unsigned int *t)
{
	int	y;

	y = 7;
	while (y > 0)
	{
		ft_bitsetfour(t, ft_bitgetfour(*t, y) + 1, y);
		y -= 2;
	}
}

void	move_left(unsigned int *t)
{
	int	y;

	y = 7;
	while (y > 0)
	{
		ft_bitsetfour(t, ft_bitgetfour(*t, y) - 1, y);
		y -= 2;
	}
}

void	move_topleft(unsigned int *t)
{
	unsigned int	tmp;

	tmp = *t;
	while (ft_bitgetfour(tmp, 7))
	{
		move_left(&tmp);
		move_left(t);
	}
	while (ft_bitgetfour(tmp, 6))
	{
		move_up(&tmp);
		move_up(t);
	}
}
