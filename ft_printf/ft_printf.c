/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:12:31 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/11/21 11:07:14 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_dispatch(char c, va_list args)
{
	int	ct;

	ct = 0;
	if (c == 'c')
		ct = ft_putchar((char)va_arg (args, int));
	else if (c == 's')
		ct = ft_putstr(va_arg (args, char *));
	else if (c == 'd')
		ct = ft_putnbr(va_arg (args, int));
	else if (c == 'i')
		ct = ft_putnbr(va_arg (args, int));
	else if (c == 'u')
		ct = ft_putnbr_base(va_arg (args, unsigned int), "0123456789");
	else if (c == 'x')
		ct = ft_putnbr_base(va_arg (args, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		ct = ft_putnbr_base(va_arg (args, unsigned int), "0123456789ABCDEF");
	else if (c == 'p')
	{
		write(1, "0x", 2);
		ct = ft_putnbr_lu((unsigned long int)va_arg (args, void *)) + 2;
	}
	else if (c == '%')
		ct = ft_putchar('%');
	return (ct);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		ct;
	va_list	args;

	i = 0;
	ct = 0;
	va_start (args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			ct += ft_dispatch(format[i], args);
		}
		else
			ct += ft_putchar(format[i]);
		i++;
	}
	va_end (args);
	return (ct);
}
