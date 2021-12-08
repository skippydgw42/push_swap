/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:54:12 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/11/19 16:32:25 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int nb)
{
	long	val;

	val = nb;
	if (nb > 2147483647 || nb < -2147483648)
		return (-1);
	if (val < 0)
	{
		val *= -1;
		write(1, "-", 1);
	}
	if (val > 9)
	{
		ft_putnbr(val / 10);
		ft_putnbr(val % 10);
	}
	else
		ft_putchar(val + '0');
	return (ft_char_nb(nb, 10));
}
