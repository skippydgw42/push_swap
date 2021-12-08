/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:19:29 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/08 16:26:49 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./ft_printf/libftprintf.h"

void	ft_rra(ptr_stack ptr)
{
	int	i;
	int	c;

	i = ptr.a->size - 1;
	c = ptr.a->tab[i];
	while (i)
	{
		ptr.a->tab[i] = ptr.a->tab[i - 1];
		i--;
	}
	ptr.a->tab[i] = c;
}

void	ft_rrb(ptr_stack ptr)
{
	int	i;
	int	c;

	i = ptr.b->size - 1;
	c = ptr.b->tab[i];
	while (i)
	{
		ptr.b->tab[i] = ptr.b->tab[i - 1];
		i--;
	}
	ptr.b->tab[i] = c;
}

void	ft_rrr(ptr_stack ptr)
{
	ft_rra(ptr);
	ft_rrb(ptr);
}
