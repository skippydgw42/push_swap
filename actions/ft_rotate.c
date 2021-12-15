/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:15:22 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/15 16:15:08 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_list **alst)
{
	t_list	*out;

	out = (*alst)->next;
	ft_lstlast(*alst)->next = (*alst);
	(*alst)->next = 0;
	(*alst) = out;
	write(1, "ra\n", 3);
}

void	ft_rb(t_list **blst)
{
	t_list	*out;

	out = (*blst)->next;
	ft_lstlast(*blst)->next = (*blst);
	(*blst)->next = 0;
	(*blst) = out;
	write(1, "rb\n", 3);
}

void	ft_rr(t_list **alst, t_list **blst)
{
	ft_ra(alst);
	ft_rb(blst);
	write(1, "rr\n", 3);
}
