/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 15:07:37 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/12 12:42:55 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	ra(t_stack *a, t_cnt *st_cnt)
{
	int adata;

	if (a->next == NULL)
		return ;
	adata = a->next->data;
	ft_pop(a);
	ft_push_last(a, adata);
	st_cnt->ra_cnt += 1;
	write(1, "ra\n", 3);
}

void	rb(t_stack *b, t_cnt *st_cnt)
{
	int bdata;

	if (b->next == NULL)
		return ;
	bdata = b->next->data;
	ft_pop(b);
	ft_push_last(b, bdata);
	st_cnt->rb_cnt += 1;
	write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b, t_cnt *st_cnt)
{
	ra(a, st_cnt);
	rb(b, st_cnt);
	write(1, "rr\n", 3);
}
