/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <mdegraeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:10:29 by mdegraeu          #+#    #+#             */
/*   Updated: 2022/01/05 12:03:42 by mdegraeu         ###   ########.fr       */
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
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static int	ft_digit_err(char **str, int l)
{
	int	i;
	int	j;

	i = 0;
	while (i < l)
	{
		if (ft_atoi(str[i]) > INT_MAX || ft_atoi(str[i]) < INT_MIN)
			return (0);
		j = 0;
		while (str[i][j])
		{
			if (!ft_isdigit(str[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strargs(char *av)
{
	int		ctsplit;
	char	**str;

	ctsplit = ft_split_count(av, ' ');
	str = ft_split(av, ' ');
	if (!ft_digit_err(str, ctsplit))
	{
		ft_free(str);
		return (0);
	}
	if (ft_same_param(ctsplit, str))
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
	if (ft_same_param(ac, av))
		return (0);
	return (1);
}
