/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:55:13 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/10 12:49:14 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/mdegraeu/github/projects/push_swap/push_swap.h"

t_init	*ft_init_a(int ac, char **av)
{
	t_init	*a;
	int			i;

	i = 0;
	a = malloc(sizeof(t_init) + 1);
	if (!a)
		return (0);
	a->tab = malloc(sizeof(int) * (ac - 1));
	if (!a->tab)
		return (0);
	a->size = ac - 1;
	while (i + 1 < ac)
	{
		a->tab[i] = ft_atoi(av[i + 1]);
		i++;
	}
	return (a);
}

t_init	*ft_init_b(int ac)
{
	t_init	*b;

	b = malloc(sizeof(t_init) + 1);
	if (!b)
		return (0);
	b->tab = malloc(sizeof(int) * (ac - 1));
	if (!b->tab)
		return (0);
	b->size = 0;
	return (b);
}

t_ptr	ft_init_stack(int ac, char **av)
{
	t_ptr	ptr;
	t_init	*a;
	t_init	*b;

	a = ft_init_a(ac, av);
	b = ft_init_b(ac);
	if (!a || !b)
	{
		ptr.a = NULL;
		ptr.b = NULL;
		return (ptr);
	}
	ptr.a = a;
	ptr.b = b;
	return (ptr);
}
