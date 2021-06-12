/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 12:41:41 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/12 12:45:12 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	ft_m_change(t_stack *a, t_stack *b, t_cnt *st_cnt, int pb_cnt, int max_v)
{
	while (pb_cnt > 0)
	{
		if (b->next->data == max_v)
		{
			pa(a, b, st_cnt);
			ra(a, st_cnt);
		}
		else
			pa(a, b, st_cnt);
		pb_cnt -= 1;
	}
}

void	ft_factor_five(t_stack *a, t_stack *b, t_cnt *st_cnt)
{
	int		max_value;
	int		min_value;
	int		pb_cnt;

	max_value = ft_find_max(a);
	min_value = ft_find_min(a);
	pb_cnt = 0;
	while (ft_size(a) > 3)
	{
		if (a->next->data == max_value ||
		a->next->data == min_value)
		{
			pb(a, b, st_cnt);
			pb_cnt += 1;
		}
		else
			ra(a, st_cnt);
	}
	ft_factor_three(a, st_cnt);
	ft_m_change(a, b, st_cnt, pb_cnt, max_value);
	ft_init_cnt(st_cnt);
}
