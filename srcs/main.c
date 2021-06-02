/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 13:54:28 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/02 16:56:03 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	t_stack 	*a;
	t_stack		*b;
	long long	*int_arr;
	long long	tmp;
	int			idx;
	
	idx = 0;
	a = ft_stack_init();
	b = ft_stack_init();
	int_arr = (long long *)malloc(sizeof(long long) * (argc - 1));
	while (idx < argc - 1)
		int_arr[idx++] = 0;
	if (argc < 2) // 매개변수 check
		ft_error(0);
	while (idx > 0)
	{
		tmp = ft_atoll(argv[idx]); // 숫자 아닌 것 check
		if (tmp > 2147483647 || tmp < -2147483648)
			ft_error(0);
		int_arr[idx - 1] = tmp;		
		idx--;
	}
	ft_check_arr(int_arr);
	ft_make_arr(a, int_arr, argc - 1);
	ft_print_lst(a); //출력부분
	pb(a,b);
	printf("\n a");
	ft_print_lst(a); //출력부분
	ra(a);
	printf("\n b");
	ft_print_lst(b); //출력부분
	rb(b);
	printf("\n a");
	ft_print_lst(a); //출력부분
	ft_free_lst(a);
	return (0);
}