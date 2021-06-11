/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 13:54:28 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/11 21:20:18 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"
#include <stdio.h>

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

t_cnt		*ft_init_cnt(void)
{
	t_cnt *tmp;

	tmp = (t_cnt *)malloc(sizeof(t_cnt));

	if (!tmp)
		ft_error(0);
	tmp->pa_cnt = 0;
	tmp->pb_cnt = 0;
	tmp->ra_cnt = 0;
	tmp->rb_cnt = 0;
	return (tmp);
}

int main(int argc, char *argv[])
{
	t_stack 	*a;
	t_stack		*b;
	t_cnt		*stack_cnt;
	int			lst_size;
	long long	*int_arr;

	if (argc < 2) // 매개변수 check
		ft_error(0);
	a = ft_stack_init();
	b = ft_stack_init();
	stack_cnt = ft_init_cnt();
	int_arr = ft_init_arr(argv, argc);
	ft_check_arr(int_arr);
	ft_make_lst(a, int_arr, argc - 1);
	lst_size = ft_size(a);
	if (lst_size < 6)
		ft_factor_five(a, b);
	else
		ft_a_b(a, b, stack_cnt, lst_size);
	ft_print_lst(a); //출력부분
	ft_free_lst(a);
	return (0);
}