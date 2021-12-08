/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:55:13 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/08 15:12:36 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include "push_swap.h"
#include "./ft_printf/libftprintf.h"

stack_init	*ft_init_a(int ac, char **av)
{
	stack_init	*a;
	int		i;

	i = 0;
	a = malloc(sizeof(stack_init) + 1);
	a->tab = malloc(sizeof(int) * (ac - 1));
	a->size = ac - 1;
	//if (!a.tab)
		//return (NULL);
	while (i + 1 < ac)
	{
		a->tab[i] = ft_atoi(av[i + 1]);
		i++;
	}

	return (a);
}

stack_init	*ft_init_b(int ac)
{
	stack_init	*b;
	b = malloc(sizeof(stack_init) + 1);
	b->tab = malloc(sizeof(int) * (ac - 1));
	//if (!b.tab)
	//	return (NULL);
	b->size = 0;
	return (b);
}

ptr_stack	ft_init_stack(int ac, char **av)
{
	ptr_stack	ptr;
	stack_init	*a;
	stack_init	*b;

	a = ft_init_a(ac, av);
	b = ft_init_b(ac);
	ptr.a = a;
	ptr.b = b;
	return (ptr);
}
