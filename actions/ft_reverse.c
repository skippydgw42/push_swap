/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:24:15 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/15 16:14:58 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra(t_list **alst)
{
	t_list	*out;
	t_list	*start;

	start = (*alst);
	out = ft_lstlast(*alst);
	while ((*alst)->next->next)
		(*alst) = (*alst)->next;
	(*alst)->next = 0;
	out->next = start;
	(*alst) = out;
	write(1, "rra\n", 4);
}

void	ft_rrb(t_list **blst)
{
	t_list	*out;
	t_list	*start;

	start = (*blst);
	out = ft_lstlast(*blst);
	while ((*blst)->next->next)
		(*blst) = (*blst)->next;
	(*blst)->next = 0;
	out->next = start;
	(*blst) = out;
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_list **alst, t_list **blst)
{
	ft_rra(alst);
	ft_rrb(blst);
	write(1, "rrr\n", 4);
}
