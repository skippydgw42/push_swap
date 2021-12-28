/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <mdegraeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:12:00 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/28 17:32:06 by mdegraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print(t_list *ptr)
{
	printf("=======================print tab===========================\n");
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
	int		ret;

	stack_a = NULL;
	stack_b = NULL;
	if (!ft_check_error(ac, av))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	stack_a = ft_init(ac, av);
	ret = ft_solver(&stack_a, &stack_b, ac - 1, ac);
	if (ret == 0)
	{
		ft_lstclear(&stack_a);
		ft_lstclear(&stack_b);
		write(1, "Error malloc\n", 13);
		return (0);
	}
	while (ft_lstsize(stack_b) > 0)
		ft_pa(&stack_a, &stack_b);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	return (0);
}
