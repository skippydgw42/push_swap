#include "../push_swap.h"

void    ft_free(char **str)
{
    int i;

    i = 0;
    while (str[i])
    {
        free (str[i]);
        i++;
    }
    free (str);
}

void    ft_stackfree(t_list **stack)
{
    t_list  *ptr;

    while(*stack)
    {
        ptr = *stack;
        *stack = (*stack)->next;
        free(ptr);
    }
    stack = NULL;
}