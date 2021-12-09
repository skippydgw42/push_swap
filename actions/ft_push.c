/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:58:00 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/09 16:24:11 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/mdegraeu/github/projects/push_swap/push_swap.h"

void	ft_pb(ptr_stack *ptr, int ac)
{
	int	i;
	stack_init	*new;

	i = ptr->b->size;
	if (i > 0)
		while (i)
		{
			ptr->b->tab[i] = ptr->b->tab[i - 1];
			i--;
		}
	ptr->b->tab[0] = ptr->a->tab[0];
	ptr->b->size++;
	new = malloc(sizeof(stack_init) + 1);
	new->tab = malloc(sizeof(int) * (ac - 1));
	new->size = ptr->a->size - 1;
	while (i + 1 < ptr->a->size)
	{
		new->tab[i] = ptr->a->tab[i + 1];
		i++;
	}
	free(ptr->a->tab);
	free(ptr->a);
	ptr->a = new;
}

void	ft_pa(ptr_stack *ptr, int ac)
{
	int	i;
	stack_init	*new;

	i = ptr->a->size;
	if (i > 0)
		while (i)
		{
			ptr->a->tab[i] = ptr->a->tab[i - 1];
			i--;
		}
	ptr->a->tab[0] = ptr->b->tab[0];
	ptr->a->size++;
	new = malloc(sizeof(stack_init) + 1);
	new->tab = malloc(sizeof(int) * (ac - 1));
	new->size = ptr->b->size - 1;
	while (i + 1 < ptr->b->size)
	{
		new->tab[i] = ptr->b->tab[i + 1];
		i++;
	}
	free(ptr->b->tab);
	free(ptr->b);
	ptr->b = new;
}
