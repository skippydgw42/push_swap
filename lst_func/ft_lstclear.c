/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <mdegraeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:43:49 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/28 17:31:03 by mdegraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//void	ft_lstclear(t_list **lst, void (*del)(long))
void	ft_lstclear(t_list **lst)
{
	t_list	*ptr;

	while ((*lst) != 0)
	{
		ptr = (*lst)->next;
		//(del)((*lst)->content);
		//free(&(*lst)->content);
		free(*lst);
		(*lst) = ptr;
	}
	*lst = NULL;
}
