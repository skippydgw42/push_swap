/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <mdegraeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:59:30 by mdegraeu          #+#    #+#             */
/*   Updated: 2022/01/03 15:55:55 by mdegraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_solver(t_list **alst, t_list **blst, long pivot, int ac)
{
	pivot = ft_pivot(ft_create_tab(*alst), ft_lstsize(*alst) - 1, ac);
	while (pivot != 2147483649)
	{
		while (ft_can_push(alst, pivot) && ft_lstsize(*alst) > 5)
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
	while (!((*blst)->content == ft_max(*blst)))
	{
		if (ft_direction(blst, ft_max(*blst)))
			ft_rb(blst);
		else
			ft_rrb(blst);
	}
	while (!ft_check_a(*alst))
		ft_sort_a(alst, blst);
	return (1);
}
