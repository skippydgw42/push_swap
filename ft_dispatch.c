/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dispatch.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:55:27 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/10 12:46:27 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/mdegraeu/github/projects/push_swap/push_swap.h"

void	ft_sort_median(int *tab, int size)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		if (tab[i] > tab[j])
		{
			x = tab[i];
			tab[i] = tab[j];
			tab[j] = x;
			i = -1;
		}
		i++;
	}
}

int	ft_median(int *tab, int size)
{
	int	i;
	int	*cpy;

	i = 0;
	cpy = malloc(sizeof(int) * size);
	if (!cpy)
		return (ft_max(tab, size) + 1);
	while (i < size)
	{
		cpy[i] = tab[i];
		i++;
	}
	ft_sort_median(cpy, size);
	if (size % 2 != 0)
		i++;
	i = cpy[i / 2];
	free (cpy);
	return (i);
}

void	ft_dispatch(t_ptr ptr, int ac)
{
	int	med;

	med = ft_median(ptr.a->tab, ptr.a->size);
	while (ft_min(ptr.a->tab, ptr.a->size) < med)
	{
		if (ptr.a->tab[0] < med)
			ft_pb(&ptr, ac);
		else
			ft_ra(ptr);
	}
}
