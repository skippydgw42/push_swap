/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:01:28 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/11 12:35:57 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_init(int ac, char **av)
{
	int		i;
	t_list	*ptr;
	t_list	*new;

	i = 1;
	ptr = NULL;
	while (i < ac)
	{
		new = ft_lstnew(ft_atoi(av[i]));
		ft_lstadd_back(&ptr, new);
		i++;
	}
	return (ptr);
}
