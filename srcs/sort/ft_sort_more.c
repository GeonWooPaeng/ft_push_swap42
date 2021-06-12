/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_more.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 13:39:24 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/12 21:21:32 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	ft_a_b(t_stack *a, t_stack *b, t_cnt *st_cnt, int cnt)
{
	int	pivot;
	int	idx;
	ft_print_lst(a); //출력부분
	printf("\n");
	ft_print_lst(b); //출력부분
	ft_init_cnt(st_cnt);
	if (cnt < 2)
		return ;
	pivot = a->next->data;
	while (cnt-- > 0)
	{
		if (a->next->data > pivot)
			ra(a, st_cnt);
		else
			pb(a, b, st_cnt);
	}
	idx = 0;
	while (idx++ < st_cnt->ra_cnt)
		rra(a);
	ft_a_b(a, b, st_cnt, st_cnt->ra_cnt);
	ft_b_a(a, b, st_cnt, st_cnt->pb_cnt);
}

void	ft_b_a(t_stack *a, t_stack *b, t_cnt *st_cnt, int cnt)
{
	int	pivot;
	int idx;

	if (cnt < 2)
	{
		pa(a, b, st_cnt);
		return ;
	}
	pivot = b->next->data;
	while (cnt-- > 0)
	{
		if (b->next->data > pivot)
			rb(b, st_cnt);
		else
			pa(a, b, st_cnt);
	}
	idx = 0;
	while (idx++ < st_cnt->rb_cnt)
		rrb(b);
	ft_a_b(a, b, st_cnt, st_cnt->pa_cnt);
	ft_b_a(a, b, st_cnt, st_cnt->rb_cnt);
}
