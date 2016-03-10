/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 09:27:30 by nhuber            #+#    #+#             */
/*   Updated: 2016/03/10 16:32:55 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

unsigned int	pos_cmp(unsigned int t1, unsigned int t2)
{
	return (t1 & t2);
}

int	pos_isfree(unsigned int *tab, unsigned int index, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (i != index && pos_cmp(tab[index], tab[i]))
			return (0);
		i++;
	}
	return (1);
}

unsigned int	pos_getindex(unsigned int *t, unsigned int x, unsigned int y)
{
	unsigned int	i;
	unsigned int	j;

	i = 1;
	while (t[i] != 0)
	{
		j = 0;
		while ((ft_bitgetfour(t[i], j + 1) != x ||
				ft_bitgetfour(t[i], j) != y) && j < 8)
			j += 2;
		if (j < 8)
			return (i);
		i++;
	}
	return (0);
}
