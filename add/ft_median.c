/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_median.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:48:56 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/15 12:56:40 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_find_med(long *tab, int size)
{
	int		i;
	int		j;
	long	ret;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		if (tab[i] > tab[j])
		{
			ret = tab[i];
			tab[i] = tab[j];
			tab[j] = ret;
			i = 0;
		}			
		else
			i++;
	}
	if (size % 2)
		size++;
	ret = tab[size / 2];
	free(tab);
	return (ret);
}

long	ft_median(t_list *ptr)
{
	int		i;
	int		size;
	long	*tab;

	i = 0;
	size = ft_lstsize(ptr);
	//return malloc error a revoir
	tab = malloc(sizeof(int) * (size + 1));
		if (!tab)
			return (INT_MAX);
	while (ptr)
	{
		tab[i] = ptr->content;
		i++;
		ptr = ptr->next;
	}
	return (ft_find_med(tab, size));
}
