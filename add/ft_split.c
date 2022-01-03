/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:24:03 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/11/10 12:05:09 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

unsigned int	ft_split_count(char const *s, char c)
{
	unsigned int	i;
	unsigned int	ct;

	i = 0;
	ct = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			ct++;
		while (s[i] != c && s[i])
			i++;
	}
	return (ct);
}

static int	ft_lit_str(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static char	*ft_cpy_str(char const *s, char c, unsigned int i)
{
	unsigned int	j;
	char			*str;

	j = 0;
	str = ft_calloc(ft_lit_str(&s[i], c) + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s[i] != c && s[i])
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	k;
	char			**split;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	split = ft_calloc(ft_split_count(s, c) + 1, sizeof(char *));
	if (!split)
		return (NULL);
	while (k < ft_split_count(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		split[k] = ft_cpy_str(s, c, i);
		k++;
		while (s[i] != c && s[i])
			i++;
	}
	split[k] = 0;
	return (split);
}
