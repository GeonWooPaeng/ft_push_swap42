/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 13:54:28 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/18 17:44:47 by gpaeng           ###   ########.fr       */
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

int		ft_split_arr_size(char **split_arr)
{
	int idx;

	idx = 0;
	while (split_arr[idx])
		idx++;
	return (idx);
}

int		ft_input_num(char **av, int ac)
{
	int size;
	int idx;
	int	split_size;
	char **split_arr;

	size = 0;
	idx = 0;
	while (idx < ac)
	{
		split_arr = ft_split(av[idx], ' ');
		split_size = ft_split_arr_size(split_arr);
		size += split_size;
		idx++;
	}
	return (size - 1);
}

int main(int argc, char *argv[])
{
	t_stack 	*a;
	t_stack		*b;
	long long	*int_arr;
	char		**split_arr;
	int			arr_size;

	if (argc < 2) // 매개변수 check
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
	return (0);
}
