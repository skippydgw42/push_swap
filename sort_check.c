#include "push_swap.h"

int	ft_check_b(t_list *ptr)
{
	int	i;
	int	size;

	i = 0;
	size = ft_lstsize(ptr);
	while (i < size - 1)
	{
		if (ptr->content < ptr->next->content)
			return (0);
		ptr = ptr->next;
		i++;
	}
	return (1);
}

int	ft_check_a(t_list *ptr)
{
	int	i;
	int	size;

	i = 0;
	size = ft_lstsize(ptr);
	while (i < size - 1)
	{
		if (ptr->content > ptr->next->content)
			return (0);
		ptr = ptr->next;
		i++;
	}
	return (1);
}

void	ft_sort_b(t_list **alst, t_list **blst)
{
	long	stop;

	if (ft_lstsize(*blst) > 1)
	{
		stop = ft_stop_roll(blst, (*alst)->content);
		if ((*alst)->content < ft_min(*blst))
			ft_go_max(blst);
		else if ((*alst)->content > ft_max(*blst))
			ft_go_max(blst);
		else
		{
			while ((*blst)->content != stop)
			{
				if (ft_direction(blst, stop))
					ft_rb(blst);
				else
					ft_rrb(blst);
			}
		}
	}
	ft_pb(alst, blst);
}

void	ft_sort_a(t_list **alst)
{
	if ((*alst)->content == ft_max(*alst))
		ft_ra(alst);
	if ((*alst)->content > ft_lstlast(*alst)->content)
		if (ft_check_a((*alst)->next))
			ft_ra(alst);
	if ((*alst)->content > (*alst)->next->content)
		ft_sa(alst);
	while ((*alst)->content < (*alst)->next->content && !ft_check_a(*alst))
		ft_ra(alst);
}