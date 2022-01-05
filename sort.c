/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <mdegraeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:21:51 by mdegraeu          #+#    #+#             */
/*   Updated: 2022/01/05 17:03:28 by mdegraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_list **alst, t_list **blst, int ac)
{
	int	ret;

	if (ft_lstsize(*alst) > 6)
	{
		ret = ft_solver(alst, blst, ac - 1, ac);
		if (ret == 0)
		{
			ft_stackfree(alst);
			ft_stackfree(blst);
			write(1, "Error malloc\n", 13);
		}
	}
	else
		ft_sort_a(alst, blst);
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
				if (ft_direction(blst, stop))
					ft_rb(blst);
				else
					ft_rrb(blst);
			}
		}
	}
	ft_pb(alst, blst);
}

void	ft_sort_a(t_list **alst, t_list **blst)
{
	if (!ft_check_a(*alst))
	{
		if (ft_lstsize(*alst) <= 3)
			ft_sort_three(alst);
		if (ft_lstsize(*alst) == 4)
			ft_sort_four(alst);
		if (ft_lstsize(*alst) == 5 || ft_lstsize(*alst) == 6)
			ft_sort_six(alst, blst);
	}
}
