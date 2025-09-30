#include "push_swap.h"

void    swap_firsttwo(t_node **stack)
{
    t_node  *temp;
    t_node  *temp2;

    if(!*stack || !*(stack)->next)
        return;
    temp = *stack;
    temp2 = temp->next;
    temp->next = temp2->next;
    temp2->next = temp;
    *(stack) = temp2;
    write(1,"sa\n",2);
}

void    push_atob(t_node **a, t_node **b)
{
    t_node  *temp;

    if(!*a)
        return ;
    temp = *a;
    *a = (*a)->next;
    temp->next = *b;
    *b = temp;
}

void    add_head_to_tail(t_node **a)
{
    t_node  *temp;
    t_node  *iter;

    temp = *a;
    iter = *a;
    *a = *a->next;
    while(iter->next)
        iter = iter->next;
    iter->next = temp;
    temp->next = NULL;
}