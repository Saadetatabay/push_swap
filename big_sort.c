#include "push_swap.h"

void    index_stack(t_node *stack)
{
    int     index;
    t_node  *pt;
    t_node  *pt2;

    pt = stack;
    while(pt)
    {
        index = 0;
        pt2 = stack;
        while(pt2)
        {
            if (pt2->value < pt->value)
                index++;
            pt2 = pt2->next;
        }
        pt->value = index;
        pt = pt->next;
    }
}