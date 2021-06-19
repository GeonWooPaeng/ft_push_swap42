/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 12:38:13 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/19 13:46:42 by gpaeng           ###   ########.fr       */
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

void		ft_arr_put(char **split_arr, long long *int_arr,
							int *jdx, int arr_size)
{
	int			split_size;
	int			split_idx;
	long long	tmp;

	split_size = ft_split_arr_size(split_arr);
	if (split_size > 2)
	{
		split_idx = 0;
		while (split_idx < split_size)
		{
			tmp = ft_atoll(split_arr[split_idx++]);
			int_arr[arr_size - 1 - *jdx] = tmp;
			*jdx += 1;
		}
	}
	else
	{
		tmp = ft_atoll(*split_arr);
		int_arr[arr_size - 1 - *jdx] = tmp;
		*jdx += 1;
	}
}

void		ft_init_arr(char **av, long long *int_arr, int ac, int arr_size)
{
	int			idx;
	int			jdx;
	char		**split_arr;

	idx = 1;
	jdx = 0;
	while (idx < ac)
	{
		split_arr = ft_split(av[idx], ' ');
		ft_arr_put(split_arr, int_arr, &jdx, arr_size);
		idx++;
	}
}
