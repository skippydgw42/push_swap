/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_direction.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 12:38:06 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/28 12:39:07 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_direction(t_list **blst, long nb)
{
	t_list	*ptr;
	int		ct;

	ptr = *blst;
	ct = 0;
	while (ptr->next)
	{
		if (nb == ft_min(*blst) && ptr->content == nb)
			break ;
		if (nb == ft_max(*blst) && ptr->content == nb)
			break ;
		if (nb == ptr->content)
			break ;
		ptr = ptr->next;
		ct++;
	}
	if (ct <= ft_lstsize(*blst) / 2)
		return (1);
	return (0);
}

long	ft_min(t_list *ptr)
{
	long	min;

	min = ptr->content;
	while (ptr)
	{
		if (ptr->content < min)
			min = ptr->content;
		ptr = ptr->next;
	}
	return (min);
}

long	ft_max(t_list *ptr)
{
	long	max;

	max = ptr->content;
	while (ptr)
	{
		if (ptr->content > max)
			max = ptr->content;
		ptr = ptr->next;
	}
	return (max);
}

void	ft_go_min(t_list **blst)
{
	long	min;

	min = ft_min(*blst);
	while ((*blst)->content != min)
	{
		if (ft_direction(blst, min))
			ft_rb(blst);
		else
			ft_rrb(blst);
	}
}

void	ft_go_max(t_list **blst)
{
	long	max;

	max = ft_max(*blst);
	while ((*blst)->content != max)
	{
		if (ft_direction(blst, max))
			ft_rb(blst);
		else
			ft_rrb(blst);
	}
}
