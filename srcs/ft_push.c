/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 15:07:43 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/02 13:42:30 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void    pa(t_stack *a, t_stack *b)
{
    int bsize;
    int bdata;

    bsize = ft_size(b);
    if (bsize < 1)
        return ;
    bdata = ft_pop(b);
    ft_push(a, bdata);
}

void    pb(t_stack *a, t_stack *b)
{
    int asize;
    int adata;

    asize = ft_size(a);
    if (asize < 1)
        return ;
    adata = ft_pop(a);
    ft_push(b, adata);
}