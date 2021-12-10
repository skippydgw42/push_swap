/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:36:56 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/10 15:47:28 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/mdegraeu/github/projects/push_swap/push_swap.h"

void	ft_sa(t_ptr ptr)
{
	int	c;

	if (ptr.a->size <= 1)
		return ;
	c = ptr.a->tab[0];
	ptr.a->tab[0] = ptr.a->tab[1];
	ptr.a->tab[1] = c;
	write(1, "sa\n", 3);
}

void	ft_sb(t_ptr ptr)
{
	int	c;

	if (ptr.b->size <= 1)
		return ;
	c = ptr.b->tab[0];
	ptr.b->tab[0] = ptr.b->tab[1];
	ptr.b->tab[1] = c;
	write(1, "sb\n", 3);
}

void	ft_ss(t_ptr ptr)
{
	ft_sa(ptr);
	ft_sb(ptr);
	write(1, "ss\n", 3);
}
