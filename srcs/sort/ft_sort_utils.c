/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:25:25 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/18 18:54:46 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

int		ft_find_max(t_stack *head)
{
	int	max_value;

	max_value = -2147483648;
	head = head->next;
	while (head)
	{
		if (max_value <= head->data)
			max_value = head->data;
		head = head->next;
	}
	return (max_value);
}

int		ft_find_min(t_stack *head)
{
	int	min_value;

	min_value = 2147483647;
	head = head->next;
	while (head)
	{
		if (min_value >= head->data)
			min_value = head->data;
		head = head->next;
	}
	return (min_value);
}

void	ft_swap(int *arr, int idx, int l_idx)
{
	int	tmp;

	tmp = arr[idx];
	arr[idx] = arr[l_idx];
	arr[l_idx] = tmp;
}

void	ft_sort_arr(int *arr, int cnt)
{
	int idx;
	int	jdx;
	int least;
	int	least_idx;

	idx = 0;
	while (idx < cnt - 1)
	{
		least = arr[idx];
		least_idx = idx;
		jdx = idx + 1;
		while (jdx < cnt)
		{
			if (least > arr[jdx])
			{
				least = arr[jdx];
				least_idx = jdx;
			}
			jdx++;
		}
		ft_swap(arr, idx, least_idx);
		idx++;
	}
}

int		ft_find_pivot(t_stack *head, int cnt)
{
	t_stack	*tmp;
	int		*arr;
	int		idx;
	int		result;

	tmp = head->next;
	arr = (int *)malloc(sizeof(int) * cnt);
	idx = 0;
	while (idx < cnt)
	{
		arr[idx++] = tmp->data;
		tmp = tmp->next;
	}
	idx = 0;
	ft_sort_arr(arr, cnt);
	result = arr[cnt / 2];
	free(arr);
	return (result);
}
