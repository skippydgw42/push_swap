/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:16:26 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/10 13:59:02 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <limits.h>

# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif
# ifndef INT_MIN
#  define INT_MAX -2147483648
# endif

typedef struct push_list
{
	int				*tab;
	int				size;
}	t_init;

typedef struct ptr_stack
{
	t_init	*a;
	t_init	*b;
}	t_ptr;

//=============INITIALIZE STACKS=============/
t_init	*ft_init_a(int ac, char **av);
t_init	*ft_init_b(int ac);
t_ptr	ft_init_stack(int ac, char **av);

//=============SWAP OPERATIONS==================/
void		ft_sa(t_ptr ptr);
void		ft_sb(t_ptr ptr);
void		ft_ss(t_ptr ptr);
void		ft_pb(t_ptr *ptr, int ac);
void		ft_pa(t_ptr *ptr, int ac);
void		ft_ra(t_ptr ptr);
void		ft_rb(t_ptr ptr);
void		ft_rr(t_ptr ptr);
void		ft_rra(t_ptr ptr);
void		ft_rrb(t_ptr ptr);
void		ft_rrr(t_ptr ptr);

//=============DISPATCH=========================/
void		ft_dispatch(t_ptr ptr, int ac);

//=============CHECK STACK======================/
int			ft_check_a(t_ptr ptr);
int			ft_check_b(t_ptr ptr);
int			ft_check_both(t_ptr ptr);

//=============SOLVER===========================/
int			ft_decision(t_ptr ptr, int ac);

//=============CHECK ERRORS=====================/
int			ft_check_error(int ac, char **av);

//=============ADDITIONNAL FUNCTIONS============/
long		ft_atoi(const char *src);
int			ft_isdigit(int c);
int			ft_max(int *tab, int size);
int			ft_min(int *tab, int size);

//=============TO_DEL FUNCT=====================/
void		ft_print_tab(int *tab, int size);

#endif
