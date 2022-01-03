#include "push_swap.h"

void    ft_sort_three(t_list **alst)
{
    while (!ft_check_a(*alst))
    {
        if ((*alst)->content == ft_max(*alst))
        {
            if (ft_check_a((*alst)->next))
                ft_ra(alst);
            else
                ft_sa(alst);
        }
        else if (ft_lstlast(*alst)->content == ft_min(*alst))
        {
            if ((*alst)->next->content == ft_max(*alst))
                ft_rra(alst);
            else
                ft_ra(alst);
        }
        else if ((*alst)->content == ft_min(*alst))
            ft_sa(alst);
        else if ((*alst)->next->content == ft_max(*alst))
                ft_ra(alst);
        else
            ft_sa(alst);
    }
}

void    ft_sort_four(t_list **alst)
{
    while (!ft_check_a(*alst))
    {
        if ((*alst)->content == ft_max(*alst) && ft_check_a((*alst)->next))
            ft_ra(alst);
        else if ((*alst)->content > (*alst)->next->content)
            ft_sa(alst);
        else if ((*alst)->content == ft_min(*alst))
        {
            if ((*alst)->next->content > (*alst)->next->next->content)
                ft_ra(alst);
            else
                ft_rra(alst);
        }
        else
            ft_rra(alst);
    }
}

void    ft_sort_six(t_list **alst, t_list **blst)
{
    while (!ft_check_a(*alst))
    {
        if ((*alst)->content == ft_max(*alst) && ft_check_a((*alst)->next))
            ft_ra(alst);
        else if ((*alst)->content > (*alst)->next->content)
            ft_sa(alst);
        //=============//
        ft_print(*alst);
        ft_print(*blst);
        while (ft_lstsize(*alst) > 4)
        {
            while ((*alst)->content != ft_min(*alst))
            {
                if ((*alst)->content > (*alst)->next->content)
                    ft_sa(alst);
                else if (ft_direction(alst, ft_min(*alst)))
                    ft_ra(alst);
                else
                    ft_rra(alst);
            }
            ft_pb(alst, blst);
            //===========//
            ft_print(*alst);
            ft_print(*blst);
        }
        if (ft_lstsize(*alst) == 4)
        {
            ft_sort_four(alst);
            while (ft_lstsize(*blst) > 0)
                ft_pa(alst, blst);
        }
        //===========//
        ft_print(*alst);
        ft_print(*blst);
    }
}
