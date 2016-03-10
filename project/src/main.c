/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 09:33:14 by nhuber            #+#    #+#             */
/*   Updated: 2016/03/10 18:46:40 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int ac, char **av)
{
	unsigned int *tar;

	tar = (unsigned int *)malloc(sizeof(unsigned int) * 27);
	ft_bzero(tar, 27);
	if (ac != 2)
		print_usage();
	else
	{
		tar[0] = 67108864;
		if (read_file(av[1], tar) == -1)
			print_error();
		else
			print_result(tar);
	}
	free(tar);
	return (0);
}
