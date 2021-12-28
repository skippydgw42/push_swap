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

long	*ft_sort_tab(long *tab, int size)
{
	int			i;
	int			j;
	long		swp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		if (tab[i] > tab[j])
		{
			swp = tab[i];
			tab[i] = tab[j];
			tab[j] = swp;
			i = 0;
		}			
		else
			i++;
	}
	//printf("tab : %ld\n", tab[0]);
	return (tab);
}

long	*ft_create_tab(t_list *ptr)
{
	int		i;
	int		size;
	long	*tab;

	i = 0;
	size = ft_lstsize(ptr);
	//return malloc error a revoir
	tab = malloc(sizeof(long) * (size + 1));
	//	if (!tab)
	//		return (2147483649);
	while (ptr)
	{
		tab[i] = ptr->content;
		i++;
		ptr = ptr->next;
	}
	return (ft_sort_tab(tab, size - 1));
}

long	ft_median(t_list *ptr)
{
	int		size;
	long	*tab;
	long	ret;

	size = ft_lstsize(ptr);
	tab = ft_create_tab(ptr);
	if (size % 2)
		size++;
	ret = tab[size / 2];
	free (tab);
	return (ret);
}