/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:19:05 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/04 12:26:09 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../includes/ft_push_swap.h"

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
	else if (top)
}
