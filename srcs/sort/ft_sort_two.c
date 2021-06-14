/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 15:45:27 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/14 15:58:10 by gpaeng           ###   ########.fr       */
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
