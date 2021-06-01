/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:52:17 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/01 16:56:32 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	ft_print_lst(t_stack *stack)
{
	while (stack)
	{
		printf("%d\n",stack->data);
		stack = stack->next;
	}
}

void	ft_free_lst(t_stack *stack)
{
	t_stack *nstack;

	while (stack)
	{
		nstack = stack->next;
		free(stack);
		stack = nstack;
	}
}

void	ft_make_arr(t_stack *stack, long long *arr, int cnt)
{
	int idx;

	idx = cnt - 1;
	while (idx > -1)
	{
		t_stack *new_node = (t_stack *)malloc(sizeof(t_stack));
		new_node->data = arr[idx];
		new_node->next = stack->next;
		new_node->prev = stack;
		stack->next = new_node;
		idx--;
	}
}
