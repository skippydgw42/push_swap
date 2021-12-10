/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:19:29 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/10 15:46:04 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/mdegraeu/github/projects/push_swap/push_swap.h"

void	ft_rra(t_ptr ptr)
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
	write(1, "rra\n", 4);
}

void	ft_rrb(t_ptr ptr)
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
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_ptr ptr)
{
	ft_rra(ptr);
	ft_rrb(ptr);
	write(1, "rrr\n", 4);
}
