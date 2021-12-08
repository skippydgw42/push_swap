/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_lu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:20:19 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/11/19 16:15:07 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_lu(unsigned long int nb)
{
	char			*base;

	base = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_putnbr_lu(nb / 16);
		ft_putnbr_lu(nb % 16);
	}
	else
		ft_putchar(base[nb]);
	return (ft_char_nb_lu(nb, 16));
}
