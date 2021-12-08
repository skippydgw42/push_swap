/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:05:30 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/08 16:37:16 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include "push_swap.h"
#include "./ft_printf/libftprintf.h"

int	main(int ac, char **av)
{
	int	i;
	ptr_stack	ptr;

	i = 0;
	ptr = ft_init_stack(ac, av);
	ft_sa(ptr);
	ft_pb(&ptr, ac);
	ft_pb(&ptr, ac);
	ft_pb(&ptr, ac);
	ft_ra(ptr);
	ft_rb(ptr);
	ft_rra(ptr);
	ft_rrb(ptr);
	ft_sa(ptr);
	ft_pa(&ptr, ac);
	ft_pa(&ptr, ac);
	ft_pa(&ptr, ac);
	while (i < ptr.a->size)
	{
		printf("%d          ", ptr.a->tab[i]);
		if (i < ptr.b->size)
			printf("%d", ptr.b->tab[i]);
		i++;
		printf("\n");
	}
	return (0);
}
