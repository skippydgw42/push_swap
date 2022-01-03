/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:10:29 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/11 15:40:43 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_same_param(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strargs(char *av)
{
	int		i;
	int		j;
	int		l;
	char	**str;

	i = 0;
	l = ft_split_count(av, ' ');
	str = ft_split(av, ' ');
	while (i < l)
	{
		j = i + 1;
		if (ft_atoi(str[i]) > INT_MAX || ft_atoi(str[i]) < INT_MIN)
		{
			ft_free(str);
			return (0);
		}
		while (str[i][j])
		{
			if (!ft_isdigit(str[i][j]))
			{
				ft_free(str);
				return (0);
			}
			j++;
		}
		i++;
	}
	if (!ft_same_param(l, str))
	{
		ft_free(str);
		return (0);
	}
	ft_free(str);
	return (1);
}

int	ft_check_error(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac < 2)
		return (0);
	if (ac == 2)
		return (ft_strargs(av[1]));
	while (i < ac)
	{
		if (ft_atoi(av[i]) > INT_MAX || ft_atoi(av[i]) < INT_MIN)
			return (0);
		j = 0;
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]) && av[i][0] != '-')
				return (0);
			j++;
		}
		i++;
	}
	if (!ft_same_param(ac, av))
		return (0);
	return (1);
}
