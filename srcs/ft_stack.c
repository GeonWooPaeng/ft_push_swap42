/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:56:22 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/01 18:34:33 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	ft_stack_init(t_stack *stack)
{
	stack->prev = NULL;
	stack->data = 0;
	stack->next = NULL;
}

int		ft_empty(t_stack *head)
{
	if (head == NULL)
		return (1);
	return (0);
}

void	ft_push(t_stack *head, int data)
{//뒤에다 추가 해주는 식입니다.
	t_stack *new_node;

	if (new_node == NULL)
		ft_error(0);
	new_node = (t_stack *)malloc(sizeof(t_stack));
	new_node->data = data;
	new_node->next = head->next;
	new_node->prev = head;
	head->next->prev = new_node;
	head->next = new_node;
}

int		ft_pop(t_stack *head)
{
	t_stack *del;
	int		value;

	del = head->next;
	value = del->data;
	head->next = del->next;
	del->next->prev = head;
	free(del);
	return (value);
}