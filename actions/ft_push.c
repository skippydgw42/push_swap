/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:50:16 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/15 16:14:14 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pb(t_list **alst, t_list **blst)
{
	t_list	*out;

	out = (*alst)->next;
	ft_lstadd_front(blst, (*alst));
	(*alst) = out;
	write(1, "pb\n", 3);
}

void	ft_pa(t_list **alst, t_list **blst)
{
	t_list	*out;

	out = (*blst)->next;
	ft_lstadd_front(alst, (*blst));
	(*blst) = out;
	write(1, "pa\n", 3);
}
