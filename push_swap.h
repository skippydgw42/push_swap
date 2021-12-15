/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 10:58:32 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/15 16:36:09 by mdegraeu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif

# ifndef INT_MIN
#  define INT_MIN -2147483648
# endif

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	long			content;
	struct s_list	*next;
}	t_list;

//===============LST_FUNCTIONS==============================//
t_list	*ft_lstnew(long content);
void	ft_lstadd_front(t_list **alst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(long));
void	ft_lstclear(t_list **lst, void (*del)(long));

//=================ACTIONS==================================//
void	ft_sa(t_list **alst);
void	ft_sb(t_list **blst);
void	ft_ss(t_list **alst, t_list **blst);
void	ft_ra(t_list **alst);
void	ft_rb(t_list **blst);
void	ft_rr(t_list **alst, t_list **blst);
void	ft_rra(t_list **alst);
void	ft_rrb(t_list **blst);
void	ft_rrr(t_list **alst, t_list **blst);
void	ft_pb(t_list **alst, t_list **blst);
void	ft_pa(t_list **alst, t_list **blst);

//=================SOLVER===================================//
//void	ft_dispatch(t_list **alst, t_list **blst);
void	ft_dispatch(t_list **alst, t_list **blst, long med);
void	ft_sort_a(t_list **alst, int med);
int		ft_check_a(t_list *ptr);

//=================PARSING==================================//
int		ft_check_error(int ac, char **av);

//================ADDITIONNAL_FUNC==========================//
long	ft_atoi(const char *str);
int		ft_isdigit(int c);
long	ft_median(t_list *ptr);

//===============INITIALIZE CHAIN===========================//
t_list	*ft_init(int ac, char **av);

//================TO_DEL===================================//
void	ft_print(t_list *ptr);

#endif
