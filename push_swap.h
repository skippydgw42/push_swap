/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegraeu <mdegraeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 10:58:32 by mdegraeu          #+#    #+#             */
/*   Updated: 2021/12/28 16:06:24 by mdegraeu         ###   ########.fr       */
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
//void	ft_lstclear(t_list **lst, void (*del)(long));
void	ft_lstclear(t_list **lst);
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

//=================PARSING==================================//
int		ft_check_error(int ac, char **av);

//=================SOLVER===================================//
int		ft_solver(t_list **alst, t_list **blst, long pivot, int ac);

//=================SORT CHECK===============================//
void	ft_sort_a(t_list **alst);
void	ft_sort_b(t_list **alst, t_list **blst);
int		ft_check_a(t_list *ptr);
int		ft_check_b(t_list *ptr);

//================ADDITIONNAL_FUNC==========================//
long	ft_atoi(const char *str);
int		ft_isdigit(int c);
int		ft_direction(t_list **blst, long nb);
long	ft_min(t_list *ptr);
void	ft_go_min(t_list **blst);
long	ft_max(t_list *ptr);
void	ft_go_max(t_list **blst);
int		ft_can_push(t_list **alst, long pivot);

//===============NEW NEEDS===================================//
long	ft_stop_roll(t_list **blst, long nb);
long	ft_pivot(long *tab, int size, int ac);
long	ft_not_b(t_list *ptr);
long	*ft_create_tab(t_list *ptr);

//===============INITIALIZE CHAIN===========================//
t_list	*ft_init(int ac, char **av);

//================TO_DEL===================================//
void	ft_print(t_list *ptr);

#endif
