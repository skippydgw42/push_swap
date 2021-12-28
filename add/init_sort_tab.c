/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <mdegraeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:48:56 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/28 12:59:11 by mdegraeu         ###   ########.fr       */
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
	return (tab);
}

long	*ft_create_tab(t_list *ptr)
{
	long	i;
	int		size;
	long	*tab;

	i = 0;
	size = ft_lstsize(ptr);
	tab = malloc(sizeof(long) * (size + 1));
	if (!tab)
	{
		ptr->content = 2147483649;
		return (&ptr->content);
	}
	while (ptr)
	{
		tab[i] = ptr->content;
		i++;
		ptr = ptr->next;
	}
	return (ft_sort_tab(tab, size - 1));
}
