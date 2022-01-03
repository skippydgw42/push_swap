/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piv_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <mdegraeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 12:41:11 by mdegraeu          #+#    #+#             */
/*   Updated: 2022/01/03 16:39:43 by mdegraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	ft_stop_roll(t_list **blst, long nb)
{
	t_list	*ptr;

	ptr = *blst;
	while (ptr->next)
	{
		if (nb > ft_max(*blst) || nb < ft_min(*blst))
			return (ft_min(ptr));
		if (nb < ptr->content && nb > ptr->next->content)
			return (ptr->next->content);
		ptr = ptr->next;
	}
	return ((*blst)->content);
}

long	ft_pivot(long *tab, int size, int ac)
{
	int		div;
	long	ret;

	div = 20;
	if (ac > 400)
		div = 50;
	if (size <= 5)
		return (2147483649);
	if (size <= 25)
		while (size - div <= 5)
			div--;
	ret = tab[div];
	free (tab);
	return (ret);
}

long	ft_not_b(t_list *ptr)
{
	long	ret;
	long	*tab;
	int		size;

	tab = ft_create_tab(ptr);
	size = ft_lstsize(ptr);
	ret = tab[size - 5];
	free (tab);
	return (ret);
}
