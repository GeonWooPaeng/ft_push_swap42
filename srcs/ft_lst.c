/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:52:17 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/03 12:50:31 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	ft_print_lst(t_stack *stack)
{
	while (stack)
	{
		printf("%d\n", stack->data);
		printf("address prev >>> %p\n", stack->prev);
		printf("address >>>> %p\n", stack);
		printf("address next >>> %p\n", stack->next);
		stack = stack->next;
	}
}

t_stack	*ft_find_last_lst(t_stack *stack)
{
	if (!stack)
		return (0);
	while (stack->next)
	{
		stack = stack->next;
	}
	return (stack);
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

void	ft_make_arr(t_stack *head, long long *arr, int cnt)
{
	int		idx;
	t_stack	*new_node;

	idx = cnt - 1;
	while (idx > -1)
	{
		new_node = (t_stack *)malloc(sizeof(t_stack));
		if (head->next == NULL)
		{
			new_node->data = arr[idx];
			new_node->next = NULL;
			new_node->prev = head;
			head->next = new_node;
		}
		else
		{
			new_node->data = arr[idx];
			new_node->next = head->next;
			new_node->next->prev = new_node;
			new_node->prev = head;
			head->next = new_node;
		}
		idx--;
	}
}
