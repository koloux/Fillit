/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 16:38:37 by nhuber            #+#    #+#             */
/*   Updated: 2016/03/10 18:46:32 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int tet_ref[19] = {69664, 69921, 66066, 34607378, 1056817, 17899554,
			66064, 1052946, 69649, 69906, 1052961, 17830176,
			16912401, 1056816, 66051, 1052960, 17830162,
			17830177, 66065};

int	check_buff(char *buff, int size)
{
	size_t	i;
	size_t	flag;
	int	nbpc;

	i = 0;
	nbpc = 0;
	flag = (size == 20) ? 1 : 0;
	while (buff[i])
	{
		if (buff[i] == '#' && nbpc < 4)
		{
			nbpc++;
			i++;
		}
		else if (((buff[i] == '.' && (i + flag) % 5 != 0) 
				|| ((i + flag) % 5 == 0 && buff[i] == '\n')) 
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
	while (i < 20)
	{
		if (pos_cmp(tet, tet_ref[i]) == tet)
			return (1);
		i++;
	}
	return (-1);
}
