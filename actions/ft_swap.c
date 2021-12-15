/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 13:41:56 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/15 16:15:22 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(t_list **alst)
{
	t_list	*out;

	out = (*alst);
	(*alst) = (*alst)->next;
	out->next = (*alst)->next;
	(*alst)->next = out;
	write(1, "sa\n", 3);
}

void	ft_sb(t_list **blst)
{
	t_list	*out;

	out = (*blst);
	(*blst) = (*blst)->next;
	out->next = (*blst)->next;
	(*blst)->next = out;
	write(1, "sb\n", 3);
}

void	ft_ss(t_list **alst, t_list **blst)
{
	ft_sa(alst);
	ft_sb(blst);
	write(1, "ss\n", 3);
}
