/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 08:49:47 by nhuber            #+#    #+#             */
/*   Updated: 2016/03/12 20:32:05 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

unsigned int	solve(unsigned int *t, unsigned int i)
{
	int	res;

	if (tab[i] == 0)
		return (1);
	res = solve_set(tab, i);
	if (!res && i == 1)
	{
		tab[0] += (1 << 24);
		ft_bitsetfour(tab[0], 1, 0);
		move_resetal(tab);
		return (solve(tab, i));
	}
	if (res)
		return (solve(tab, i + 1));
	return (solve(tab, i - 1));
}

int	solve_set(unsigned int *t, unsigned int index)
{
	int		x;
	int		y;
	unsigned int	tetcp;
	int		flag;

	flag = 0;
	tetcp = tab[i];
	if (ft_bitgeteight(tab[i], 3) != 0 || !ft_bitgetfour(tab[0], 0))
		flag = 1;
	tab[0] = (ft_bitgetfour(tab[0], 0) == 1) ? tab[0] ^ 1 : tab[0];
	while (!pos_isfree(tab, tetcp, i) || flag)
	{
		flag = 0;
		x = pos_getborder(tetcp, "bottom");
		y = pos_getborder(tetcp, "right");
		if (y + 1 < (tab[0] >> 24))
			move_right(&tetcp);
		else if (y + 1 >= (tab[0] >> 24) && x + 1 <= (tab[0] >> 24))
			move_nxtl(&tetcp);
		else
			return (0);
	}
	if (pos_getborder(tetcp, "bottom") >= (tab[0] >> 24)
			|| pos_getborder(tetcp, "right") >= (tab[0] >> 24))
		return (0);
	tab[i] = tetcp;
	return (1);
}
