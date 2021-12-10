/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:05:30 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/10 15:52:30 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/mdegraeu/github/projects/push_swap/push_swap.h"

void	ft_print_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
		printf("\n");
	}
}

int	main(int ac, char **av)
{
	t_ptr	ptr;

	if (!ft_check_error(ac, av))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	ptr = ft_init_stack(ac, av);
	ft_dispatch(ptr, ac);
	ft_decision(ptr, ac);
	while (ptr.b->size > 0)
		ft_pa(&ptr, ac);
	ft_print_tab(ptr.a->tab, ptr.a->size);
	ft_print_tab(ptr.b->tab, ptr.b->size);
	return (0);
}
