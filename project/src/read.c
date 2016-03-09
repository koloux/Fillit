/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 13:48:04 by nhuber            #+#    #+#             */
/*   Updated: 2016/03/09 17:26:05 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	read_file(char *file, unsigned int **t)
{
	int	fd;
	int	ret;
	int	size;
	char	buff[22];

	size = 20;
	if ((fd = open(file, O_RDONLY)) != -1)
	{
		while ((ret = read(fd, buff, size)) != 0)
		{
			buff[ret] = '\0';
			if (check_buff(buff) != size)
			{
				print_error();
				return ;
			}
			read_bufftoint(buff, t, 0);
			(size == 20) ? size++ : size;
		}
		if (close(fd) == -1)
			print_error();
	}
	else
		print_error();
}

void	read_bufftoint(char *buff, unsigned int **t, int index_t)
{
	unsigned int	tet;
	int		x;
	int		y;
	int		index;

	x = 0;
	y = 0;
	index = 7;
	while (*buff == '\n')
		buff++;
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
	t[index_t] = &tet;
}
