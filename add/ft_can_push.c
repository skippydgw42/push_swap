/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_can_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <mdegraeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 12:39:23 by mdegraeu          #+#    #+#             */
/*   Updated: 2022/01/05 17:09:53 by mdegraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_can_push(t_list **alst, long pivot)
{
	t_list	*ptr;

	ptr = *alst;
	while (ptr)
	{
		if (ptr->content <= pivot)
			return (1);
		ptr = ptr->next;
	}
	return (0);
}
