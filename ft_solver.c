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
	long	stop;

	if (ft_lstsize(*blst) > 1)
	{
		stop = ft_stop_roll(blst, (*alst)->content);
		if ((*alst)->content < ft_min(*blst))
			ft_go_max(blst);
		else if ((*alst)->content > ft_max(*blst))
			ft_go_max(blst);
		else
		{
			while ((*blst)->content != stop)
			{
				//if (ft_direction(blst, (*alst)->content))
				if (ft_direction(blst, stop))
					ft_rb(blst);
				else
					ft_rrb(blst);
			}
		}
	}
	ft_pb(alst, blst);
	ft_print(*blst);
}

void	ft_sort_a(t_list **alst)
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

//essaie de changer la valeur de 'med' jusqu a lstsize(*alst) < 5 dans tous les cas !
int	ft_solver(t_list **alst, t_list **blst, long pivot)
{
	pivot = ft_pivot(ft_create_tab(*alst), ft_lstsize(*alst) - 1);
	while (pivot != 2147483649)
	{
		//write(1, "ICI\n", 4);
		while (ft_still_push(alst, pivot))
		{
			if ((*alst)->content <= pivot && (*alst)->content < ft_not_b(*alst))
				ft_sort_b(alst, blst);
			else
				ft_ra(alst);
		}
		pivot = ft_pivot(ft_create_tab(*alst), ft_lstsize(*alst) - 1);
	}
	while (!ft_check_a(*alst))
		ft_sort_a(alst);
	while (!((*blst)->content == ft_max(*blst)))
		ft_rrb(blst);
	return (1);
}
