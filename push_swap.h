/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:16:26 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/09 16:11:26 by mdegraeu         ###   ########lyon.fr   */
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

typedef struct	push_list
{
	int				*tab;
	int				size;
}	stack_init;

typedef	struct	ptr_stack
{
	stack_init	*a;
	stack_init	*b;
}	ptr_stack;

//=============INITIALIZE STACKS=============/
stack_init	*ft_init_a(int ac, char **av);
stack_init	*ft_init_b(int ac);
ptr_stack	ft_init_stack(int ac, char **av);

//=============SWAP OPERATIONS==================/
void		ft_sa(ptr_stack ptr);
void		ft_sb(ptr_stack ptr);
void		ft_ss(ptr_stack ptr);
void		ft_pb(ptr_stack *ptr, int ac);
void		ft_pa(ptr_stack *ptr, int ac);
void		ft_ra(ptr_stack ptr);
void		ft_rb(ptr_stack ptr);
void		ft_rr(ptr_stack ptr);
void		ft_rra(ptr_stack ptr);
void		ft_rrb(ptr_stack ptr);
void		ft_rrr(ptr_stack ptr);

//=============DISPATCH=========================/
void		ft_dispatch(ptr_stack ptr, int ac);

//=============SOLVER===========================/
int			ft_decision(ptr_stack ptr, int ac);

//=============CHECK ERRORS=====================/
int			ft_check_error(int ac, char **av);

//=============ADDITIONNAL FUNCTIONS============/
long		ft_atoi(const char *src);
int			ft_isdigit(int c);
int			ft_max(int *tab, int size);
int			ft_min(int *tab, int size);

//=============TO_DEL FUNCT=====================/
void	ft_print_tab(int *tab, int size);

#endif
