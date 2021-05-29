/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:45:05 by gpaeng            #+#    #+#             */
/*   Updated: 2021/05/29 19:29:32 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"
#include <stdio.h>

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

void	ft_push(int data)
{
	t_stack *new_node = (t_stack *)malloc(sizeof(t_stack));
	new_node->data = data;
}

void	ft_pop()
{}

void	ft_quick_sort()
{}

int main(int argc, char *argv[])
{
	t_stack *head;
	int	argv_idx;
	
	head = NULL;
	argv_idx = 1;
	while (argv[argv_idx])
	{
	}
	return (0);
}