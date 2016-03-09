/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 09:33:14 by nhuber            #+#    #+#             */
/*   Updated: 2016/03/09 17:26:03 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int ac, char **av)
{

	(void)ac;
	(void)av;
	//if (ac != 2)
		//print_usage();
	//else
	//check tet
	char *buff;
	char *buff2;
	unsigned int *tar;

	tar = (unsigned int *)malloc(sizeof(unsigned int) * 27);
	buff = "#...\n#...\n#...\n#...\n";
	read_bufftoint(buff, &tar, 0);
	printf("1056816 ? -> %d\n", tar[0]);
	buff2 = "\n..#.\n###.\n....\n....\n";
	read_bufftoint(buff2, &tar, 1);
	printf("34607378 ? -> %d\n", tar[1]);
	return (0);
}
