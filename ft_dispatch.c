/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dispatch.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:55:27 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/09 17:40:30 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/mdegraeu/github/projects/push_swap/push_swap.h"

void	ft_dispatch(ptr_stack ptr, int ac)
{
	int	mid;
	int	min;
	int	max;

	mid = 0;
	min = ft_min(ptr.a->tab, ptr.a->size);
	max = ft_max(ptr.a->tab, ptr.a->size);
	while (mid - min < max - mid)
		mid++;
	while (ft_max(ptr.a->tab, ptr.a->size) > mid)
	{
		if (ptr.a->tab[0] > mid)
			ft_pb(&ptr, ac);
		else
			ft_ra(ptr);
	}
}
