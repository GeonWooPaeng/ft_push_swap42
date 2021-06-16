/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:23:49 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/16 16:43:03 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct	s_stack
{
	struct s_stack *prev;
	int	data;
	struct s_stack *next;
}	t_stack;

//ft_utils.c
int			ft_isspace(char c);
int			ft_error(int ret);
int			ft_check_arr(long long *arr);
long long	ft_atoll(char *str);

//ft_lst.c
void	ft_print_lst(t_stack *stack);
void	ft_free_lst(t_stack *a, t_stack *b);
void	ft_make_lst(t_stack *stack, long long *arr, int cnt);
t_stack	*ft_find_last_lst(t_stack *stack);

//ft_stack.c
void	ft_push_first(t_stack *stack, int data);
void	ft_pop(t_stack *head);
void	ft_pop_last(t_stack *head);
int		ft_size(t_stack *head);
void	ft_push_last(t_stack *head, int data);

//ft_init.c
t_stack	*ft_stack_init(void);
long long	*ft_init_arr(char **av, int ac);

//function/ft_swap.c
void    sa(t_stack *a);
void    sb(t_stack *b);
void    ss(t_stack *a, t_stack *b);

//function/ft_push.c
void    pa(t_stack **a, t_stack **b);
void    pb(t_stack **a, t_stack **b);

//function/ft_rotate.c
void    ra(t_stack **a);
void    rb(t_stack **b);
void    rr(t_stack **a, t_stack **b);

//function/ft_rrotate.c
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

//sort/ft_sort_utils.c
int		ft_find_max(t_stack *head);
int		ft_find_min(t_stack *head);

//sort/ft_sort_two.c
void	ft_factor_two(t_stack *head);

//sort/ft_sort_three.c
void	ft_factor_three(t_stack *head);

//sort/ft_sort_five.c
void	ft_factor_five(t_stack *a, t_stack *b);
void	ft_m_change(t_stack *a, t_stack *b, int pb_cnt, int max_v);


//sort/ft_sort_more.c
void	ft_a_b(t_stack *a, t_stack *b, int cnt);
void	ft_b_a(t_stack *a, t_stack *b, int cnt);

#endif