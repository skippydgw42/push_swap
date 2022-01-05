/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <mdegraeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:12:00 by mdegraeu          #+#    #+#             */
/*   Updated: 2022/01/05 11:59:53 by mdegraeu         ###   ########.fr       */
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
	char	**str;

	str = NULL;
	stack_a = NULL;
	stack_b = NULL;
	if (!ft_check_error(ac, av))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (ac == 2)
	{
		str = ft_split(av[1], ' ');
		stack_a = ft_init(ft_split_count(av[1], ' '), str);
		ft_free(str);
	}
	else
		stack_a = ft_init(ac - 1, &av[1]);
	ft_sort(&stack_a, &stack_b, ac);
	ft_stackfree(&stack_a);
	ft_stackfree(&stack_b);
	return (0);
}
