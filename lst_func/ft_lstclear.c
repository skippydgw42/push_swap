/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:43:49 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/11 11:43:24 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstclear(t_list **lst, void (*del)(long))
{
	t_list	*ptr;

	while ((*lst) != 0)
	{
		ptr = (*lst)->next;
		(del)((*lst)->content);
		free(*lst);
		(*lst) = ptr;
	}
	*lst = NULL;
}
