/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 09:27:30 by nhuber            #+#    #+#             */
/*   Updated: 2016/03/09 15:22:51 by nhuber           ###   ########.fr       */
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
