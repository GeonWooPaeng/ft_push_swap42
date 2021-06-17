/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 13:54:28 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/17 21:02:20 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	ft_check_factor(t_stack *a, t_stack *b, int num)
{
	if (num == 1)
		return ;
	else if (num == 2)
		ft_factor_two_a(a);
	else if (num > 2 && num < 6)
		ft_factor_five(a, b);
	else
		ft_a_b(a, b, num);
}

int main(int argc, char *argv[])
{
	t_stack 	*a;
	t_stack		*b;
	long long	*int_arr;

	if (argc < 2) // 매개변수 check
		ft_error(0);
	a = ft_stack_init();
	b = ft_stack_init();
	int_arr = ft_init_arr(argv, argc);
	ft_check_arr(int_arr);
	ft_make_lst(a, int_arr, argc - 1);
	ft_check_factor(a, b, argc - 1);
	ft_print_lst(a); //출력부분
	printf("\n");
	ft_print_lst(b); //출력부분
	ft_free_lst(a, b);
	return (0);
}