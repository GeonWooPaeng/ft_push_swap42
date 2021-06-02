/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:56:22 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/02 17:25:52 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

t_stack	*ft_stack_init()
{
	t_stack	*tmp;

	tmp = (t_stack *)malloc(sizeof(t_stack));
	tmp->prev = NULL;
	tmp->data = 0;
	tmp->next = NULL;
	return (tmp);
}

void	ft_push(t_stack *head, int data)
{//뒤에다 추가 해주는 식입니다.
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

int		ft_pop(t_stack *head)
{//관련된 것 고쳐야 합니다.
	t_stack *del;
	int		value;

	del = head->next;
	value = del->data;
	head->next = del->next;
	del->next->prev = head;
	free(del);
	return (value);
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