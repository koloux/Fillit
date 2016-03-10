/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 13:48:04 by nhuber            #+#    #+#             */
/*   Updated: 2016/03/10 18:44:21 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	read_file(char *file, unsigned int *t)
{
	int	fd;
	int	ret;
	int	size;
	char	buff[22];
	int	i;

	i = 1;
	size = 20;
	if ((fd = open(file, O_RDONLY)) != -1)
	{
		while ((ret = read(fd, buff, size)) != 0)
		{
			buff[ret] = '\0';
			if (check_buff(buff, size) != size || ret != size
					|| check_tet(t[i]) == -1)
				return (-1);
			read_bufftoint(buff, t, i);
			(size == 20) ? size++ : size;
			i++;
		}
		if (close(fd) == -1)
			return (-1);
	}
	else
		return (-1);
	return (0);
}

void	read_bufftoint(char *buff, unsigned int *t, int index_t)
{
	unsigned int	tet;
	int		x;
	int		y;
	int		index;

	x = 0;
	y = 0;
	index = 7;
	(*buff == '\n') ? buff++ : buff;
	while (*buff)
	{
		if (*buff == '#')
		{
			ft_bitsetfour(&tet, x, index);
			ft_bitsetfour(&tet, y, index - 1);
			index -= 2;
		}
		y++;
		if (*buff == '\n')
		{
			y = 0;
			x++;
		}
		buff++;
	}
	move_topleft(&tet);
	t[index_t] = tet;
}
