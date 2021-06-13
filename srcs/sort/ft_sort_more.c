/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_more.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 13:39:24 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/13 14:18:16 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	ft_a_b(t_stack *a, t_stack *b, t_cnt *st_cnt, int cnt)
{
	int	a_pivot;
	int	idx;
	int	pb_cnt;

	if (cnt == 0)
		return ;
	a_pivot = a->next->data;
	ra(a, st_cnt);
	st_cnt->ra_cnt = 0;
	pb_cnt = 0;
	printf("a >>>>> cnt:%d\n", cnt);
	while (cnt-- > 0)
	{
		printf("a >>>>> data:%d\n", a->next->data);
		printf("a >>>>> a_pivot:%d\n", a_pivot);
		if (a->next->data > a_pivot)
			ra(a, st_cnt);
		else
		{	
			pb(a, b, st_cnt);
			pb_cnt += 1;
		}
	}
	idx = 0;
	while (idx++ < st_cnt->ra_cnt)
		rra(a);
	st_cnt->pa_cnt = 0;
	printf("a >>>>> pb_cnt:%d\n", pb_cnt);
	ft_a_b(a, b, st_cnt, st_cnt->ra_cnt);
	ft_b_a(a, b, st_cnt, pb_cnt);
}

void	ft_b_a(t_stack *a, t_stack *b, t_cnt *st_cnt, int cnt)
{
	int	b_pivot;
	int idx;
	// int pa_cnt;
	printf("\n\nfirst ===========================================\n\n\n");
	ft_print_lst(a); //출력부분
	printf("\n\n\n\n\n");
	ft_print_lst(b); //출력부분
	printf("\n\n===========================================\n\n\n");

	if (cnt == 1)
	{
		pa(a, b, st_cnt);
		return ;
	}
	b_pivot = b->next->data;
	st_cnt->rb_cnt = 0;
	printf("b >>>>> cnt:%d\n", cnt);
	while (cnt-- > 0)
	{
		printf("b >>>>> data:%d\n", b->next->data);
		printf("b >>>>> b_pivot:%d\n", b_pivot);
		if (b->next->data < b_pivot)
			rb(b, st_cnt);
		else
			pa(a, b, st_cnt);
	}
	idx = 0;
	while (idx++ < st_cnt->rb_cnt)
		rrb(b);
	printf("\n\nsecond===========================================\n\n\n");
	ft_print_lst(a); //출력부분
	printf("\n\n\n\n\n");
	ft_print_lst(b); //출력부분
	printf("\n\n===========================================\n\n\n");
	printf("b >>>>>>>> rb_cnt:%d\n", st_cnt->rb_cnt);
	printf("b >>>>>>>> pa_cnt:%d\n", st_cnt->pa_cnt);
	st_cnt->pb_cnt = 0;
	ft_a_b(a, b, st_cnt, st_cnt->pa_cnt);
	// ft_b_a(a, b, st_cnt, st_cnt->rb_cnt);
}
