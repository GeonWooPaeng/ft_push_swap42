/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 13:54:28 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/01 16:07:27 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	t_stack 	*a;
	long long	*int_arr;
	int			idx;
	long long	tmp;
	
	idx = 0;
	a = (t_stack *)malloc(sizeof(t_stack));
	a->next = NULL;
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
	ft_make_a(a, int_arr, argc - 1);
	ft_print_lst(a);
	ft_free_lst(a);
	return (0);
}