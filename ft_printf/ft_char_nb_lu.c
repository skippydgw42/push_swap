/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_nb_lu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:38:32 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/11/19 16:49:05 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_char_nb_lu(unsigned long int nb, int base)
{
	int	ct;

	ct = 0;
	if (nb == 0)
		ct++;
	while (nb)
	{
		nb /= base;
		ct++;
	}
	return (ct);
}
