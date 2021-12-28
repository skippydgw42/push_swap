/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <mdegraeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:59:30 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/28 15:37:30 by mdegraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_solver(t_list **alst, t_list **blst, long pivot, int ac)
{
	pivot = ft_pivot(ft_create_tab(*alst), ft_lstsize(*alst) - 1, ac);
	while (pivot != 2147483649)
	{
		while (ft_can_push(alst, pivot))
		{
			if ((*alst)->content <= pivot && (*alst)->content < ft_not_b(*alst))
				ft_sort_b(alst, blst);
			else
				ft_ra(alst);
		}
		pivot = ft_pivot(ft_create_tab(*alst), ft_lstsize(*alst) - 1, ac);
		if ((*alst)->content == 2147483649)
			return (0);
	}
	while (!ft_check_a(*alst))
		ft_sort_a(alst);
	while (!((*blst)->content == ft_max(*blst)))
	{
		if (ft_direction(blst, ft_max(*blst)))
			ft_rb(blst);
		else
			ft_rrb(blst);
	}
	return (1);
}
