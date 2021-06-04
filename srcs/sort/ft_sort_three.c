/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:19:05 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/04 14:01:24 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../includes/ft_push_swap.h"

// ft_sort_utils.c
int		ft_find_max(t_stack *head)
{
	int	max_value;

	max_value = -2147483849;
	head = head->next;
	while (head)
	{
		if (max_value < head->data)
			max_value = head->data;
		head = head->next;
	}
	return (max_value);
}

int		ft_find_min(t_stack *head)
{
	int	min_value;

	min_value = 2147483648;
	head = head->next;
	while (head)
	{
		if (min_value > head->data)
			min_value = head->data;
		head = head->next;
	}
	return (min_value);
}

//---------------------------------

void	ft_factor_three(t_stack *head)
{
	t_stack	*top;
	t_stack	*bot;
	int		max_value;
	int		min_value;

	top = head->next;
	bot = head->next->next->next;
	max_value = ft_find_max(head);
	min_value = ft_find_min(head);
	if (top->next->data == max_value)
		rra(head);
	else if ((top->next->data == min_value
	&& bot->data == max_value) ||
	(top->data == max_value && bot->data == min_value))
		sa(head);
	else if (top->data == max_value
	&& top->next->data == min_value)
		ra(head);
}
