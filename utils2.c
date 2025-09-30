#include "push_swap.h"

int ft_check_sorted(t_node *stack)
{
    if (!stack->next)
        return (1);
    while(stack->next)
    {
        if(stack->value > stack->next->value)
            return (0);
        stack = stack->next;
    }
    return(1);
}

int ft_stack_size(t_node *stack)
{
    int ret;

    ret = 0;
    while(stack)
    {
        ret++;
        stack = stack->next;
    }
    return (ret);
}