/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:52:17 by gpaeng            #+#    #+#             */
/*   Updated: 2021/05/31 16:11:32 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	ft_print_lst(t_stack *stack)
{
	while (stack->next)
	{
		stack = stack->next;
		printf("%d\n",stack->data);
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