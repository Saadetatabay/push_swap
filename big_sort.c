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

int ft_max_bits(int max)
{
    int max_bit;

    max_bit = 0;
    while (max >> max_bit != 0)
        max_bit++;
    return (max_bit);
}

void    big_sort(t_node **stack_a, t_node **stack_b, int size)
{
    int max_bits;
    int i;
	int	j;

    i = 0;
    max_bits = ft_max_bits(size-1);
    index_stack(stack_a);
    while (max_bits)
    {
		j = 0;
		while (j < size)
		{
			if (((*stack_a)->index >> i) & 1 == 0)
				push_atob(stack_a, stack_b);
			else
				add_head_to_tail(stack_a);
			j++;
		}
		max_bits--;
	}
}