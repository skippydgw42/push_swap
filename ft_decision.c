/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decision.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:42:52 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/09 17:38:38 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/mdegraeu/github/projects/push_swap/push_swap.h"

int	ft_check_b(ptr_stack ptr)
{
	int	i;
	int	j;

	i = 0;
	while (i < ptr.b->size)
	{
		j = i + 1;
		while (j < ptr.b->size)
		{
			if (ptr.b->tab[i] < ptr.b->tab[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_a(ptr_stack ptr)
{
	int	i;
	int	j;

	i = 0;
	while (i < ptr.a->size)
	{
		j = i + 1;
		while (j < ptr.a->size)
		{
			if (ptr.a->tab[i] > ptr.a->tab[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_sort_a(ptr_stack ptr)
{
	if (ptr.a->tab[0] == ft_max(ptr.a->tab, ptr.a->size))
		ft_ra(ptr);
	if (ptr.a->tab[0] > ptr.a->tab[1])
		ft_sa(ptr);
	if (!ft_check_a(ptr))
		ft_ra(ptr);
}

void	ft_sort_b(ptr_stack ptr)
{
	if (ptr.b->tab[0] == ft_min(ptr.b->tab, ptr.b->size))
		ft_rb(ptr);
	if (ptr.b->tab[0] < ptr.b->tab[1])
		ft_sb(ptr);
	if (!ft_check_b(ptr))
		ft_rb(ptr);
}

int	ft_decision(ptr_stack ptr, int ac)
{
	while (!ft_check_a(ptr)) // && !ft_check_b(ptr))
	{
		ft_sort_b(ptr);
		ft_sort_a(ptr);
	}
	if (!ft_check_b(ptr) && !ft_check_a(ptr))
		return (0);
	return (1);
}
