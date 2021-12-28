#include "../push_swap.h"

long	ft_stop_roll(t_list **blst, long nb)
{
    t_list  *ptr;
    int     i;

    ptr = *blst;
    i = 0;
    printf("size: %d\n", ft_lstsize(*blst));
	while (ptr)
	{
        printf("i : %d\n", i);
        if (nb > ft_max(ptr) || nb < ft_min(ptr))
            return (ft_min(ptr));
        if (nb < ptr->content && nb > ptr->next->content)
            return (ptr->next->content);
        ptr = ptr->next;
        i++;
	}
    return ((*blst)->content);
}

//diviser la liste d'args en groupes de 10 pour les trier dans B
long    ft_pivot(long *tab, int size)
{
    int     div;
    long    ret;

    div = 20;
    if (size <= 5)
        return (2147483649);
    if (size <= 25)
        while (size - div <= 5)
            div--;
    ret = tab[div];
    //free (tab);
    return (ret);
}

//garder quelque part les 5 plus grandes valeurs pour les garder dans A à la fin.
long    ft_not_b(t_list *ptr)
{
    long    ret;
    long    *tab;
    int     size;

    tab = ft_create_tab(ptr);
    size = ft_lstsize(ptr);
    ret = tab[size - 5];
    //free (tab);
    return (ret);
}