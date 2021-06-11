/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 12:41:41 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/11 15:49:24 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	ft_m_change(t_stack *a, t_stack *b, int pb_cnt, int max_v)
{
	while (pb_cnt > 0)
	{
		if (b->next->data == max_v)
		{
			pa(a, b);
			ra(a);
		}
		else
			pa(a, b);
		pb_cnt -= 1;
	}
}

void	ft_factor_five(t_stack *a, t_stack *b)
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
			pb(a, b);
			pb_cnt += 1;
		}
		ra(a);
	}
	ft_factor_three(a);
	ft_m_change(a, b, pb_cnt, max_value);
}
