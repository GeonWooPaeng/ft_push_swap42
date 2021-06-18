/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 13:54:28 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/18 18:49:28 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	ft_check_factor(t_stack *a, t_stack *b, int num)
{
	if (num == 1)
		return ;
	else if (num == 2)
		ft_factor_two(a);
	else if (num > 2 && num < 6)
		ft_factor_five(a, b);
	else
		ft_a_b(a, b, num);
}

int		main(int argc, char *argv[])
{
	t_stack		*a;
	t_stack		*b;
	long long	*int_arr;
	int			arr_size;

	if (argc < 2)
		exit(0);
	a = ft_stack_init();
	b = ft_stack_init();
	arr_size = ft_input_num(argv, argc);
	int_arr = (long long *)malloc(sizeof(long long) * (arr_size - 1));
	if (!int_arr)
		ft_error(0);
	ft_init_arr(argv, int_arr, argc, arr_size);
	ft_check_arr(int_arr);
	ft_make_lst(a, int_arr, arr_size);
	ft_check_factor(a, b, arr_size);
	printf("========= a ======");
	ft_print_lst(a);
	printf("=========b =======");
	ft_print_lst(b);
	return (0);
}
