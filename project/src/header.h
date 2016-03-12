/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 09:16:39 by nhuber            #+#    #+#             */
/*   Updated: 2016/03/12 20:32:49 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <fcntl.h>
# include <stdio.h>
# include "libft.h"

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

int	read_file(char *file, unsigned int *t);
void	read_bufftoint(char *buff, unsigned int *t, int index_t);

/*
 * **    POS.C
 * */

unsigned int	pos_cmp(unsigned int t1, unsigned int t2);
int		pos_isfree(unsigned int *t, unsigned int tet, unsigned int index);
unsigned int	pos_getindex(unsigned int *t, unsigned int x, unsigned int y);
int		pos_getborder(unsigned int tet, char *direction);
/*
 * **    DEBUG.C
 * */

void	debug_coordinates(unsigned int t);

/*
 * **    CHECK.C
 * */

int	check_buff(char *buff, int size);
int	check_tet(unsigned int tet);

/*
 * **    SOLVE.C
 * */

unsigned int	solve(unsigned int *t, unsigned int index);

/*
 * **    PRINT.C
 * */

void	print_result(unsigned int *t);
void	print_usage(void);
void	print_error(void);

#endif
