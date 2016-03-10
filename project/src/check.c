/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 16:38:37 by nhuber            #+#    #+#             */
/*   Updated: 2016/03/10 16:34:24 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	check_buff(char *buff, int size)
{
	size_t	i;
	size_t	flag;
	int	nbpc;

	i = 0;
	nbpc = 0;
	flag = 0;
	(size == 20) ? flag++ : i++;
	while (buff[i])
	{
		if (buff[i] == '#' && nbpc < 4)
		{
			nbpc++;
			i++;
		}
		else if ((buff[i] == '.' || ((i + flag) % 5 == 0 && buff[i] == '\n')) 
				&& nbpc < 5)
			i++;
		else
			return (-1);
	}
	return ((i == ft_strlen(buff)) ? i : -1);
}

int	check_tet(unsigned int tet)
{
	int	i;

	i = 0;
	(void)tet;
	while (i < 20)
	{
	//	if (pos_cmp(tet, tet_ref[i]) == tet)
	//		return (1);
		i++;
	}
	return (-1);
}
