/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 15:07:37 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/18 21:34:07 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	ra(t_stack *a, int *ra_cnt)
{
	int adata;

	if (a->next == NULL)
		return ;
	adata = a->next->data;
	ft_pop(a);
	ft_push_last(a, adata);
	*ra_cnt += 1;
	write(1, "ra\n", 3);
}

void	rb(t_stack *b, int *rb_cnt)
{
	int bdata;

	if (b->next == NULL)
		return ;
	bdata = b->next->data;
	ft_pop(b);
	ft_push_last(b, bdata);
	*rb_cnt += 1;
	write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	int idx;

	idx = 0;
	ra(a, &idx);
	rb(b, &idx);
	write(1, "rr\n", 3);
}
