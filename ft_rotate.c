/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:10:17 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/08 16:18:48 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./ft_printf/libftprintf.h"

void	ft_ra(ptr_stack ptr)
{
	int	i;
	int	c;

	i = 0;
	c = ptr.a->tab[0];
	while (i + 1 < ptr.a->size)
	{
		ptr.a->tab[i] = ptr.a->tab[i + 1];
		i++;
	}
	ptr.a->tab[i] = c;
}

void	ft_rb(ptr_stack ptr)
{
	int	i;
	int	c;

	i = 0;
	c = ptr.b->tab[0];
	while (i + 1 < ptr.b->size)
	{
		ptr.b->tab[i] = ptr.b->tab[i + 1];
		i++;
	}
	ptr.b->tab[i] = c;
}

void	ft_rr(ptr_stack ptr)
{
	ft_ra(ptr);
	ft_rb(ptr);
}
