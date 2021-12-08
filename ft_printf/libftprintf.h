/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:00:26 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/11/21 11:08:13 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_char_nb(int nb, int base);
int		ft_char_nb_u(unsigned int nb, int base);
int		ft_char_nb_lu(unsigned long int nb, int base);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int nb);
int		ft_putnbr_base(unsigned int nb, char *base);
int		ft_putnbr_lu(unsigned long int nb);
size_t	ft_strlen(const char *str);

#endif
