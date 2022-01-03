/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <mdegraeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:43:49 by mdegraeu          #+#    #+#             */
/*   Updated: 2022/01/03 12:25:03 by mdegraeu         ###   ########lyon.fr   */
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
