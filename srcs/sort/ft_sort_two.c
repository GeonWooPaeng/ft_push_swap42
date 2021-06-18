/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 15:45:27 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/18 18:47:12 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	ft_factor_two(t_stack *head)
{
	t_stack	*first;
	t_stack	*second;

	first = head->next;
	second = head->next->next;
	if (first->data > second->data)
		sa(head);
	else
		return ;
}

void	ft_factor_b_a(t_stack *a, t_stack *b, int cnt, int *pa_cnt)
{
	if (cnt == 1)
		pa(a, b);
	else if (cnt == 2)
	{
		if (b->next->data <= b->next->next->data)
			sb(b);
		pa(a, b);
		pa(a, b);
		*pa_cnt += 2;
	}
	return ;
}
