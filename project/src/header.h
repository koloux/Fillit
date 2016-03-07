/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 09:16:39 by nhuber            #+#    #+#             */
/*   Updated: 2016/03/07 09:35:36 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
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
 * **    POS.C
 * */

int	pos_cmp(unsigned int t1, unsigned int t2);
int	pos_isfree(unsigned int *tab, unsigned int index, size_t size);

/*
 * **    DEBUG.C
 * */

/*
 * **    PRINT.C
 * */

void	print_result(unsigned int *t, size_t size);

#endif
