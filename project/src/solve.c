/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 08:49:47 by nhuber            #+#    #+#             */
/*   Updated: 2016/03/11 18:13:26 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

unsigned int	solve(unsigned int *t, int i, unsigned int sqrsize)
{
	if (tab[i] == 0)
		return ;
	if (i == 0 || solve_set(tab, i))
		return (solve(i + 1, tab));
	else
		return (solve(i - 1, tab));
}

unsigned int	solve_sqrsize(unsigned int *t, unsigned int sqrsize)
{
	return ((t[0] = sqrsize << 24));
}

int	solve_set(unsigned int *t, int index)
{

}
