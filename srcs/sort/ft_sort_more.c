/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_more.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 13:39:24 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/11 21:28:32 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	ft_a_b(t_stack *a, t_stack *b, t_cnt *st_cnt, int cnt)
{
	int	pivot;
	int	idx;

	if (cnt == 1)
		return ;
	pivot = ft_find_last_lst(a);
	idx = 0;
	while (idx++ < cnt)
	{
		if (a->next->data > pivot)
		{
			ra(a);
			st_cnt->ra_cnt += 1;
		}
		else
		{
			pb(a, b);
			st_cnt->pb_cnt += 1;
		}
	}
	while (idx-- > ra_cnt)
		rra(a);
	ft_a_b(a, b, st_cnt, st_cnt->ra_cnt);
	ft_b_a(a, b, st_cnt, st_cnt->pb_cnt);
}

void	ft_b_a(t_stack *a, t_stack *b, t_cnt *st_cnt, int cnt)
{
	int pivot;
	int idx;
	int ra_cnt;

	if (cnt == 1)
	{
		pa(a, b);
		return ;
	}
	pivot = ft_find_last_lst(b);
	idx = 0;
	while (idx++ < cnt)
	{
		if (b->next->data > pivot)
			
	}
}
