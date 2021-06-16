/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 15:07:37 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/16 16:49:30 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	ra(t_stack *a)
{
	int adata;

	if (a->next == NULL)
		return ;
	adata = a->next->data;
	ft_pop(a);
	ft_push_last(a, adata);
	write(1, "ra\n", 3);
}

void	rb(t_stack *b)
{
	int bdata;

	if (b->next == NULL)
		return ;
	bdata = b->next->data;
	ft_pop(b);
	ft_push_last(b, bdata);
	write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
}
