/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:10:17 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/10 15:46:46 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/mdegraeu/github/projects/push_swap/push_swap.h"

void	ft_ra(t_ptr ptr)
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
	write(1, "ra\n", 3);
}

void	ft_rb(t_ptr ptr)
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
	write(1, "rb\n", 3);
}

void	ft_rr(t_ptr ptr)
{
	ft_ra(ptr);
	ft_rb(ptr);
	write(1, "rr\n", 3);
}
