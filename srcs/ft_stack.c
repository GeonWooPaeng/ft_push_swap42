/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:56:22 by gpaeng            #+#    #+#             */
/*   Updated: 2021/05/31 15:03:24 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	ft_stack_init(t_stack *stack)
{
	stack->data = 0;
	stack->next = NULL;
}

int		ft_empty(t_stack *head)
{
	if (head == NULL)
		return (1);
	return (0);
}

void	ft_push(t_stack *stack, int data)
{
	t_stack *new_node = (t_stack *)malloc(sizeof(t_stack));
	new_node->data = data;
	new_node->next = stack->next;
	stack->next = new_node;
}
