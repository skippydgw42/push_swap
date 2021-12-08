/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:23:42 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/08 14:09:06 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include "push_swap.h"
#include "./ft_printf/libftprintf.h"

stack_list	*ft_init_a(int ac, char **av)
{
	stack_list	*a;
	int		i;

	i = 0;
	a = malloc(sizeof(stack_list) + 1);
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

stack_list	*ft_init_b(int ac)
{
	stack_list	*b;
	b = malloc(sizeof(stack_list) + 1);
	b->tab = malloc(sizeof(int) * (ac - 1));
	//if (!b.tab)
	//	return (NULL);
	b->size = 0;
	return (b);
}

ptr_stack	ft_init_stack(int ac, char **av)
{
	ptr_stack	ptr;
	stack_list	*a;
	stack_list	*b;

	a = ft_init_a(ac, av);
	b = ft_init_b(ac);
	ptr.a = a;
	ptr.b = b;
	return (ptr);
}
