/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <mdegraeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:01:28 by mdegraeu          #+#    #+#             */
/*   Updated: 2022/01/03 13:06:33 by mdegraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_init(int ac, char **av)
{
	int		i;
	t_list	*ptr;
	t_list	*new;

	i = 0;
	ptr = NULL;
	while (i < ac)
	{
		new = ft_lstnew(ft_atoi(av[i]));
		ft_lstadd_back(&ptr, new);
		i++;
	}
	return (ptr);
}
