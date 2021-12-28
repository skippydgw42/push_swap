/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:12:00 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/15 16:34:09 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print(t_list *ptr)
{
	printf("==========================print tab==============================\n");
	while (ptr)
	{
		printf("%ld\n", ptr->content);
		ptr = ptr->next;
	}
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;

	i = 5;
	stack_a = NULL;
	stack_b = NULL;
	if (!ft_check_error(ac, av))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	stack_a = ft_init(ac, av);
	ft_solver(&stack_a, &stack_b, ac - 1);
	while (ft_lstsize(stack_b) > 0)
		ft_pa(&stack_a, &stack_b);
	//ft_print(stack_a);
	return (0);
}
