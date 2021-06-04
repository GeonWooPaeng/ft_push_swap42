/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 15:07:43 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/04 12:24:02 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	int	bsize;
	int	bdata;

	bsize = ft_size(b);
	if (bsize < 1)
		return ;
	bdata = b->next->data;
	ft_pop(b);
	ft_push_first(a, bdata);
	write(1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b)
{
	int	asize;
	int	adata;

	asize = ft_size(a);
	if (asize < 1)
		return ;
	adata = a->next->data;
	ft_pop(a);
	ft_push_first(b, adata);
	write(1, "pb\n", 3);
}
