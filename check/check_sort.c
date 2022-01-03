/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:21:43 by mdegraeu          #+#    #+#             */
/*   Updated: 2022/01/03 13:21:46 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_b(t_list *ptr)
{
	int	i;
	int	size;

	i = 0;
	size = ft_lstsize(ptr);
	while (i < size - 1)
	{
		if (ptr->content < ptr->next->content)
			return (0);
		ptr = ptr->next;
		i++;
	}
	return (1);
}

int	ft_check_a(t_list *ptr)
{
	int	i;
	int	size;

	i = 0;
	size = ft_lstsize(ptr);
	while (i < size - 1)
	{
		if (ptr->content > ptr->next->content)
			return (0);
		ptr = ptr->next;
		i++;
	}
	return (1);
}
