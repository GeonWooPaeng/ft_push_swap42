/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:56:22 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/12 12:39:08 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	ft_push_first(t_stack *head, int data)
{
	t_stack *new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));

	if (head->next == NULL)
	{
		new_node->data = data;
		new_node->next = NULL;
		new_node->prev = head;
		head->next = new_node;
	}
	else
	{
		new_node->data = data;
		new_node->next = head->next;
		head->next->prev = new_node;
		new_node->prev = head;
		head->next = new_node;
	}
}

void	ft_push_last(t_stack *head, int data)
{
	t_stack *new_node;
	t_stack *tmp_last;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	tmp_last = ft_find_last_lst(head);
	if (head->next == NULL)
	{
		new_node->data = data;
		new_node->next = NULL;
		new_node->prev = head;
		head->next = new_node;
	}
	else
	{
		new_node->data = data;
		new_node->next = NULL;
		new_node->prev = tmp_last;
		tmp_last->next = new_node;
	}
}

void	ft_pop(t_stack *head)
{
	t_stack *del;

	del = head->next;
	if (del == NULL)
		return ;
	else
	{
		head->next = del->next;
		free(del);
	}
}

void	ft_pop_last(t_stack *head)
{
	t_stack *del;

	del = head->next;
	if (del == NULL)
		return ;
	else
	{
		del = ft_find_last_lst(head);
		del->prev->next = NULL;
		free(del);
	}
}

int		ft_size(t_stack *head)
{
	int size;

	size = 0;
	while (head->next)
	{
		head = head->next;
		size++;
	}
	return (size);
}
