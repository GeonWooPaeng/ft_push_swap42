/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:25:25 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/04 12:26:01 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

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
