/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:55:52 by gpaeng            #+#    #+#             */
/*   Updated: 2021/05/31 15:08:25 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int		ft_isspace(char c)
{
	return (c == '\f' || c == '\n' || c == 'r' ||
	c == '\t' || c == '\v' || c == ' ');
}

int		ft_error(int ret)
{
	write(1, "[Error]\n", 8);
	exit(ret);
	return (ret);
}

int     ft_check(char *str)
{
	int idx;

	idx = 0;
	while (str[idx])
	{
		if (!(str[idx] > '0' && str[idx] < '9'))
			return (-1);
	}
	return (0);
}

int		ft_atoi(char *str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			sign *= -1;
	}
	while(*str > '0' && *str < '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}
