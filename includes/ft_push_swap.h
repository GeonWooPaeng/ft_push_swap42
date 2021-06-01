/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:23:49 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/01 15:43:06 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct	s_stack
{
	int	data;
	struct s_stack *next;
}	t_stack;

//ft_utils.c
int			ft_isspace(char c);
int			ft_error(int ret);
int			ft_check_arr(long long *arr);
long long	ft_atoll(char *str);

//ft_stack.c
void	ft_stack_init(t_stack *stack);
int		ft_empty(t_stack *head);
void	ft_push(t_stack *stack, int data);

//ft_lst.c
void	ft_print_lst(t_stack *stack);
void	ft_free_lst(t_stack *stack);
void	ft_make_a(t_stack *a, long long *arr, int cnt);

#endif