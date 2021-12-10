/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 13:57:25 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/10 13:59:53 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/mdegraeu/github/projects/push_swap/push_swap.h"

int	ft_check_b(t_ptr ptr)
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

int	ft_check_a(t_ptr ptr)
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

int	ft_check_both(t_ptr ptr)
{
	if (ft_check_a(ptr) && ft_check_b(ptr))
		return (1);
	return (0);
}
