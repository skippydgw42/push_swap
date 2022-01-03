/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:22:32 by mdegraeu          #+#    #+#             */
/*   Updated: 2022/01/03 12:27:00 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free (str[i]);
		i++;
	}
	free (str);
}

void	ft_stackfree(t_list **stack)
{
	t_list	*ptr;

	while (*stack)
	{
		ptr = *stack;
		*stack = (*stack)->next;
		free(ptr);
	}
	stack = NULL;
}
