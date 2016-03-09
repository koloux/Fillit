/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 09:16:39 by nhuber            #+#    #+#             */
/*   Updated: 2016/03/09 17:12:54 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <fcntl.h>
# include <stdio.h>
# include "libft.h"

/*
int tet_ref[19] = {69680, 69921, 66066, 34607378, 1056817, 17899554,
			66064, 1052946, 69649, 69906, 1052961, 17830176,
			16912401, 1056816, 66051, 1052960, 17830162,
			17830177, 66065};
*/
/*
 * **    MOVE.C
 * */

void	move_down(unsigned int *t);
void	move_up(unsigned int *t);
void	move_right(unsigned int *t);
void	move_left(unsigned int *t);
void	move_topleft(unsigned int *t);

/*
 * **    READ.C
 * */
void	read_file(char *file, unsigned int **t);
void	read_bufftoint(char *buff, unsigned int **t, int index_t);

/*
 * **    POS.C
 * */

unsigned int	pos_cmp(unsigned int t1, unsigned int t2);
int	pos_isfree(unsigned int *tab, unsigned int index, size_t size);

/*
 * **    DEBUG.C
 * */

void	debug_coordinates(unsigned int t);
/*
 * **    CHECK.C
 * */
int	check_buff(char *buff);
int	check_tet(unsigned int tet);


/*
 * **    PRINT.C
 * */

void	print_result(unsigned int *t, size_t size);
//void	print_usage(void);
void	print_error(void);

#endif
