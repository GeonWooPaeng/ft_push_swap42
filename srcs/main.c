/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 13:54:28 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/13 14:08:36 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int main(int argc, char *argv[])
{
	t_stack 	*a;
	t_stack		*b;
	t_cnt		*stack_cnt;
	// int			lst_size;
	long long	*int_arr;

	if (argc < 2) // 매개변수 check
		ft_error(0);
	a = ft_stack_init();
	b = ft_stack_init();
	stack_cnt = (t_cnt *)malloc(sizeof(t_cnt));
	if (!stack_cnt)
		ft_error(0);
	ft_init_cnt(stack_cnt);
	int_arr = ft_init_arr(argv, argc);
	ft_check_arr(int_arr);
	ft_make_lst(a, int_arr, argc - 1);
	// lst_size = ft_size(a);
	if (argc - 1 < 6)
		ft_factor_five(a, b, stack_cnt);
	else
		ft_a_b(a, b, stack_cnt, argc - 2);
	ft_print_lst(a); //출력부분
	printf("\n");
	ft_print_lst(b); //출력부분
	ft_free_lst(a);
	free(stack_cnt);
	return (0);
}