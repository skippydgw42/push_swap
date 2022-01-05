/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <mdegraeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:22:32 by mdegraeu          #+#    #+#             */
/*   Updated: 2022/01/05 12:01:37 by mdegraeu         ###   ########.fr       */
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
