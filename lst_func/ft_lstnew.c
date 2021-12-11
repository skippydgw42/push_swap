/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:42:52 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/11 12:15:19 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstnew(long content)
{
	t_list	*output;

	output = malloc(sizeof(t_list) + 1);
	if (!output)
		return (NULL);
	output->content = content;
	output->next = 0;
	return (output);
}
