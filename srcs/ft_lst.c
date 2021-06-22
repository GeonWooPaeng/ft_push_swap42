/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:52:17 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/22 12:55:40 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

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
		a->next = NULL;
		a->prev = NULL;
		a = nstack;
	}
	while (b)
	{
		nstack = b->next;
		free(b);
		b->next = NULL;
		b->prev = NULL;
		b = nstack;
	}
}

void	ft_make_lst(t_stack *head, long long *arr, int cnt)
{
	int		idx;
	t_stack	*new_node;

	idx = 0;
	while (idx < cnt)
	{
		new_node = (t_stack *)malloc(sizeof(t_stack));
		if (!new_node)
			ft_error(0);
		if (head->next == NULL)
		{
			new_node->data = arr[idx++];
			new_node->next = NULL;
			new_node->prev = head;
			head->next = new_node;
		}
		else
		{
			new_node->data = arr[idx++];
			new_node->next = head->next;
			new_node->next->prev = new_node;
			new_node->prev = head;
			head->next = new_node;
		}
	}
}
