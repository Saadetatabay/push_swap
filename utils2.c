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

void    sort_three(t_node **stack)
{
    int top;
    int mid;
    int bottom;

    top = (*stack)->value;
    mid = (*stack)->next->value;
    bottom = (*stack)->next->next->value;
    if(top > mid && top > bottom)
        add_head_to_tail(stack_a);
    else if(top > mid)
        swap_firsttwo(stack_a);
    if(mid > bottom)
        add_tail_to_head(stack_a); 

}

void    sort_stack(t_node **stack_a,t_node **stack_b, int size_a)
{
    if (size_a == 2)
        swap_firsttwo(stack_a);
    if (size_a == 3)
        sort_tree(stack_a);
}