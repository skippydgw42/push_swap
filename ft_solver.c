/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:59:30 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/15 16:40:47 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_check_b(t_list *ptr)
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

int		ft_check_a(t_list *ptr)
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

void	ft_sort_b(t_list **alst, t_list **blst)
{
	if (ft_lstsize(*blst) > 1)
	{
		if ((*alst)->content < ft_min(*blst))
		{
			ft_go_min(blst);
			ft_rb(blst);
		}
		else if ((*alst)->content > ft_max(*blst))
			ft_go_max(blst);
		else
		{
			while (!((*alst)->content < (*blst)->content && (*alst)->content > (*blst)->next->content))
			{
				if (ft_direction(blst, (*alst)->content))
					ft_rb(blst);
				else
					ft_rrb(blst);
			}
			ft_rb(blst);
		}
	}
		ft_pb(alst, blst);
}

void	ft_sort_a(t_list **alst, int med)
{
	if ((*alst)->content > med && (*alst)->next->content > med)
	{
		if ((*alst)->content == ft_max(*alst))
			ft_ra(alst);
		if ((*alst)->content > ft_lstlast(*alst)->content && ft_check_a((*alst)->next))
			ft_ra(alst);
		if ((*alst)->content > (*alst)->next->content)
			ft_sa(alst);
		while ((*alst)->content < (*alst)->next->content && !ft_check_a(*alst))
			ft_ra(alst);
	}
}

int	ft_dispatch(t_list **alst, t_list **blst, long med)
{
	while (ft_lstsize(*alst) > ft_lstsize(*blst))
	{
		if ((*alst)->content <= med)
			ft_sort_b(alst, blst);
		else
			ft_ra(alst);
	}
	while (ft_lstsize(*alst) > 5)
		ft_sort_b(alst, blst);
	while (!ft_check_a(*alst))
		ft_sort_a(alst, med);
	while (!((*blst)->content == ft_max(*blst)))
		ft_rrb(blst);
	return (0);
}
