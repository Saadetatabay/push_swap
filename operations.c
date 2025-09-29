#include "push_swap.h"

void    swap_firsttwo(t_node **stack)
{
    t_node  *temp;

    if(!*stack || !*(stack)->next)
        return;
    temp = *stack;
    temp2 = temp->next;
    temp->next = temp2->next;
    temp2->next = temp;
    *(stack) = temp2;
    write(1,"sa\n",2);
}