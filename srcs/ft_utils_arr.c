/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_arr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 18:17:35 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/19 16:12:13 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		ft_split_arr_size(char **split_arr)
{
	int idx;

	idx = 0;
	while (split_arr[idx])
		idx++;
	return (idx);
}

void	free_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int		ft_input_num(char **av, int ac)
{
	int		size;
	int		idx;
	int		split_size;
	char	**split_arr;

	size = 0;
	idx = 0;
	while (idx < ac)
	{
		split_arr = ft_split(av[idx], ' ');
		split_size = ft_split_arr_size(split_arr);
		size += split_size;
		free_str(split_arr);
		idx++;
	}
	return (size - 1);
}
