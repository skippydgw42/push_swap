/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decision.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:42:52 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/10 15:54:58 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/mdegraeu/github/projects/push_swap/push_swap.h"

void	ft_sort_a(t_ptr ptr, int *tab, int size)
{
	if (tab[0] == ft_max(tab, size))
		ft_ra(ptr);
	if (tab[0] > tab[1])
		ft_sa(ptr);
	if (!ft_check_a(ptr))
		ft_ra(ptr);
}

void	ft_sort_b(t_ptr ptr, int *tab, int size)
{
	if (tab[0] == ft_min(tab, size))
		ft_rb(ptr);
	if (tab[0] < tab[1])
		ft_sb(ptr);
	if (!ft_check_b(ptr))
		ft_rb(ptr);
}

void	ft_sort_both(t_ptr ptr)
{
	int	min;
	int	max;

	min = ft_min(ptr.b->tab, ptr.b->size);
	max = ft_max(ptr.a->tab, ptr.a->size);
	if (ptr.a->tab[0] == max && ptr.b->tab[0] == min)
		ft_rr(ptr);
	if (ptr.a->tab[0] > ptr.a->tab[1] && ptr.b->tab[0] < ptr.b->tab[1])
		ft_ss(ptr);
//	if (!ft_check_both(ptr))
//		ft_rr(ptr);
}

int	ft_decision(t_ptr ptr, int ac)
{
	if (ft_check_both(ptr))
		return (1);

	if (!ft_check_both(ptr))
		ft_sort_both(ptr);
	if (!ft_check_a(ptr))
		ft_sort_a(ptr, ptr.a->tab, ptr.a->size);
	if (!ft_check_b(ptr))
		ft_sort_b(ptr, ptr.b->tab, ptr.b->size);
	ft_decision(ptr, ac);
	return (0);
}
