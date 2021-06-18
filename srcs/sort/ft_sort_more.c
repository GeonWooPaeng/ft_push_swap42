/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_more.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 13:39:24 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/18 13:26:57 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

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

void	ft_a_b(t_stack *a, t_stack *b, int cnt)
{
	int	a_pivot;
	int	idx;
	int	pb_cnt;
	int ra_cnt;

	if (cnt == 1)
		return ;
	else if (cnt == 2)
	{
		ft_factor_two(a);
		return ;
	}
	ra_cnt = 0;
	pb_cnt = 0;
	a_pivot = ft_find_pivot(a, cnt);
	while (cnt-- > 0)
	{
		if (a->next->data > a_pivot)
		{
			ra(a);
			ra_cnt += 1;
		}
		else
		{
			pb(a, b);
			pb_cnt += 1;
		}
	}
	idx = 0;
	while (idx++ < ra_cnt)
		rra(a);
	ft_a_b(a, b, ra_cnt);
	ft_b_a(a, b, pb_cnt);
}

void	ft_b_a(t_stack *a, t_stack *b, int cnt)
{
	int	b_pivot;
	int idx;
	int rb_cnt;
	int pa_cnt;

	if (cnt == 1)
	{
		pa(a, b);
		return ;
	}
	pa_cnt = 0;
	rb_cnt = 0;
	b_pivot = ft_find_pivot(b, cnt);
	while (cnt-- > 0)
	{
		if (b->next->data < b_pivot)
		{
			rb(b);
			rb_cnt += 1;
		}
		else
		{
			pa(a, b);
			pa_cnt += 1;
		}
	}
	idx = 0;
	while (idx++ < rb_cnt)
		rrb(b);
	ft_a_b(a, b, pa_cnt);
	ft_b_a(a, b, rb_cnt);
}
