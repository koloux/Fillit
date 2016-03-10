/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 09:33:14 by nhuber            #+#    #+#             */
/*   Updated: 2016/03/10 16:45:23 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int ac, char **av)
{
	if (ac != 2)
		print_usage();
	else
	{
		unsigned int *tar;

		tar = (unsigned int *)malloc(sizeof(unsigned int) * 27);
		ft_bzero(tar, 27);
		tar[0] = 67108864;
		read_file(av[1], tar);	
		print_result(tar);
	}
	return (0);
}
