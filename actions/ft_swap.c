/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:36:56 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/09 16:24:40 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/mdegraeu/github/projects/push_swap/push_swap.h"

void	ft_sa(ptr_stack ptr)
{
	if (ptr.a->size <= 1)
		return ;
	int	c;

	c = ptr.a->tab[0];
	ptr.a->tab[0] = ptr.a->tab[1];
	ptr.a->tab[1] = c;
}

void	ft_sb(ptr_stack ptr)
{
	if (ptr.b->size <= 1)
		return ;
	int	c;

	c = ptr.b->tab[0];
	ptr.b->tab[0] = ptr.b->tab[1];
	ptr.b->tab[1] = c;
}

void	ft_ss(ptr_stack ptr)
{
	ft_sa(ptr);
	ft_sb(ptr);
}
