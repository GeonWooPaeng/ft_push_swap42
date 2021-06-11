/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_more.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 13:39:24 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/11 15:42:37 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	ft_a_b(t_stack *a, t_stack *b, int r)
{
	int	pivot;
	int	idx;
	int	ra_cnt;

	if (r == 1)
		return ;
	pivot = ft_find_pivot();
	idx = 0;
	ra_cnt = 0;
	while (idx < r)
	{
		if (a->next->data > pivot)
		{
			ra(a);
			ra_cnt += 1;
		}
		else
			pb(a, b);
	}
	idx = 0;
	while (idx++ > ra_cnt)
		rra(a);
	ft_a_b(ra_cnt);

}
