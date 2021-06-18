/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 12:38:13 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/18 18:54:17 by gpaeng           ###   ########.fr       */
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

void		ft_init_arr(char **av, long long *int_arr, int ac, int arr_size)
{
	int			idx;
	int			jdx;
	int			split_idx;
	char		**split_arr;
	int			split_size;
	long long	tmp;

	idx = 1;
	jdx = 0;
	while (idx < ac)
	{
		split_arr = ft_split(av[idx], ' ');
		split_size = ft_split_arr_size(split_arr);
		if (split_size > 2)
		{
			split_idx = 0;
			while (split_idx < split_size)
			{
				tmp = ft_atoll(split_arr[split_idx++]);
				int_arr[arr_size - 1 - jdx] = tmp;
				jdx++;
			}
		}
		else
		{
			tmp = ft_atoll(*split_arr);
			int_arr[arr_size - 1 - jdx] = tmp;
			jdx++;
		}
		idx++;
	}
}
