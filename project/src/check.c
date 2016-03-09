/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 16:38:37 by nhuber            #+#    #+#             */
/*   Updated: 2016/03/09 16:38:01 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	check_buff(char *buff)
{
	size_t	i;
	int	nbpc;

	i = 0;
	nbpc = 0;
	while (buff[i])
	{
		if (buff[i] == '.')
			i++;
		else if (buff[i] == '#' && nbpc < 5)
		{	
			nbpc++;
			i++;
		}
		else
		{
			if ((i == 4 || i == 9 || i == 14 || i == 19 || i == 20)
					&& buff[i] == '\n')
				i++;
			else
				return (-1);
		}
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
