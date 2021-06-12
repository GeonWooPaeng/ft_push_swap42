/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:19:05 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/12 12:29:41 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	ft_factor_three(t_stack *head, t_cnt *st_cnt)
{
	t_stack	*top;
	t_stack	*bot;
	int		max_value;
	int		min_value;

	top = head->next;
	bot = head->next->next->next;
	max_value = ft_find_max(head);
	min_value = ft_find_min(head);
	if ((top->next->data == min_value
	&& bot->data == max_value) ||
	(top->data == max_value && bot->data == min_value)
	|| (top->data == min_value &&
	top->next->data == max_value))
		sa(head);
	if (top->next->data == max_value)
		rra(head);
	if (top->data == max_value
	&& top->next->data == min_value)
		ra(head, st_cnt);
}
