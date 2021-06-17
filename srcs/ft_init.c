/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 12:38:13 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/17 16:29:58 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

t_stack		*ft_stack_init(void)
{
	t_stack	*tmp;

	tmp = (t_stack *)malloc(sizeof(t_stack));
	if (!tmp)
		ft_error(0);
	tmp->prev = NULL;
	tmp->data = 0;
	tmp->next = NULL;
	return (tmp);
}

long long	*ft_init_arr(char **av, int ac)
{
	long long	*tmp_arr;
	long long	tmp;
	int			idx;

	tmp_arr = (long long *)malloc(sizeof(long long) * (ac - 1));
	if (!tmp_arr)
		ft_error(0);
	idx = 0;
	while (idx < ac - 1)
		tmp_arr[idx++] = 0;
	while (idx > 0)
	{
		tmp = ft_atoll(av[idx]);
		tmp_arr[idx - 1] = tmp;
		idx -= 1;
	}
	return (tmp_arr);
}
