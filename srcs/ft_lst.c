/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:52:17 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/16 21:32:02 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	ft_print_lst(t_stack *stack)
{
	int	i;
	int size;

	i = 0;
	size = ft_size(stack);
	while (i <= size)
	{
		printf("stack[%d]:%p: %d \n", i++, stack, stack->data);
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

void	ft_free_lst(t_stack *a, t_stack *b)
{
	t_stack *nstack;

	while (a)
	{
		nstack = a->next;
		free(a);
		a = nstack;
	}
	while (b)
	{
		nstack = b->next;
		free(b);
		b = nstack;
	}
}

void	ft_make_lst(t_stack *head, long long *arr, int cnt)
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
