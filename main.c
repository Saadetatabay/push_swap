#include "push_swap.h"

void ft_check_arg(int argc,char **argv)
{
    int             i;
    long long int   temp;

    i = 0;
    if (argc == 2)
        argv = ft_split(argv[1],' ');
    else
        argv = argv + 1;
    while (argv[i])
    {
        if(!ft_isnum(argv[i]))
            ft_error();
        temp = ft_atoi(argv[i]);
        if (temp < INT_MIN || temp > INT_MAX)
            ft_error();
        temp = (int)temp;
        if(!ft_dup(i,temp,argv)) //aynı sayı iki defa verilmesin diye
            ft_error();
        i++;
    }   

}
int main(int argc,char **argv)
{
    t_node  *stack_a;
    if (argc == 1)
        ft_error(); //argüman yok
    if(argc == 2 && !*argv[1])
        ft_error(); //string vermiş ama boş
    ft_check_arg(argc,argv);
    stack_init(argc,argv);
}