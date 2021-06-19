/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_more.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 13:39:24 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/19 13:24:24 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	ft_rr(t_stack *a, t_stack *b, int cnt, int type)
{
	int	idx;

	idx = 0;
	if (type == 0)
	{
		while (idx++ < cnt)
			rra(a);
	}
	else
	{
		while (idx++ < cnt)
			rrb(b);
	}
}

void	ft_a_b(t_stack *a, t_stack *b, int cnt)
{
	int	a_pivot;
	int	pb_cnt;
	int ra_cnt;

	if (cnt == 1)
		return ;
	else if (cnt == 2)
	{
		ft_factor_two(a);
		return ;
	}
	ra_cnt = 0;
	pb_cnt = 0;
	a_pivot = ft_find_pivot(a, cnt);
	while (cnt-- > 0)
	{
		if (a->next->data > a_pivot)
			ra(a, &ra_cnt);
		else
			pb(a, b, &pb_cnt);
	}
	ft_rr(a, b, ra_cnt, 0);
	ft_a_b(a, b, ra_cnt);
	ft_b_a(a, b, pb_cnt);
}

void	ft_b_a(t_stack *a, t_stack *b, int cnt)
{
	int	b_pivot;
	int rb_cnt;
	int pa_cnt;

	if (cnt == 1)
	{
		pa(a, b, &pa_cnt);
		pa_cnt -= 1;
		return ;
	}
	pa_cnt = 0;
	rb_cnt = 0;
	b_pivot = ft_find_pivot(b, cnt);
	while (cnt-- > 0)
	{
		if (b->next->data < b_pivot)
			rb(b, &rb_cnt);
		else
			pa(a, b, &pa_cnt);
	}
	ft_rr(a, b, rb_cnt, 1);
	ft_a_b(a, b, pa_cnt);
	ft_b_a(a, b, rb_cnt);
}
