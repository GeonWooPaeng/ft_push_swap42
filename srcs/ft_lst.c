/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:52:17 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/01 15:02:07 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	ft_print_lst(t_stack *stack)
{
	while (stack->next)
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

void	ft_make_a(t_stack *a, long long *arr, int cnt)
{
	int idx;

	idx = cnt;
	while (idx > -1)
	{
		ft_push(a, arr[idx]);
		idx--;
	}
}