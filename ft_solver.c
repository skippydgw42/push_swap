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

long	ft_max(t_list *ptr)
{
	long	max;

	max = ptr->content;
	while (ptr)
	{
		if (max < ptr->content)
			max = ptr->content;
		ptr = ptr->next;
	}
	return (max);
}

void	ft_sort_b(t_list **blst)
{
	if ((*blst)->content < ft_lstlast(*blst)->content && ft_check_b((*blst)->next))
		ft_rb(blst);
	if ((*blst)->content < (*blst)->next->content)
		ft_sb(blst);
	while ((*blst)->content > (*blst)->next->content && !ft_check_b(*blst))
		ft_rb(blst);
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

void	ft_pre_sort(t_list **alst, t_list **blst, long med)
{
	if (ft_lstsize(*blst) > 1)
	{
		if ((*blst)->content < ft_lstlast(*blst)->content && ft_check_b((*blst)->next))
			ft_rb(blst);
		while (!ft_check_b(*blst))
			ft_sort_b(blst);
	}
	ft_sort_a(alst, med);
}

void	ft_dispatch(t_list **alst, t_list **blst, long med)
{
	//long	med;

	//med = ft_median(*alst);
	if (ft_lstsize(*alst) == 2)
		return ;
	while (ft_lstsize(*alst) > ft_lstsize(*blst))
	{
		if ((*alst)->content <= med)
			ft_pb(alst, blst);
		else
			ft_ra(alst);
		ft_pre_sort(alst, blst, med);
	}
	ft_dispatch(alst, blst, ft_median(*alst));
	//while (!ft_check_a(*alst))
	//	ft_sort_a(alst, med);
}
