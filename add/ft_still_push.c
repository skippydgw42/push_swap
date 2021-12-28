#include "../push_swap.h"

int ft_still_push(t_list **alst, long pivot)
{
    t_list  *ptr;

    ptr = *alst;
    while (ptr->next)
    {
        if (ptr->content <= pivot)
            return (1);
        ptr = ptr->next;
    }
    return (0);
}