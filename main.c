#include<unistd.h>
int ft_check_arg(int argc,char **argv)
{
    int i;
    int temp;

    i = 1;
    if(argc == 2)
    {
        i = 0;
        argv = ft_split(argv[1],' ');
    }
    while (argv[i])
    {
        temp = ft_atoi(argv[i]);
        
    }

}
int main(int argc,char **argv)
{
    if (argc == 1)
        return(1); //argüman yok
    if(argc == 2 && !*argv[1])
        return(1); //string vermiş ama boş
    if(!ft_check_arg(argc,argv)) //true false dönsün
        return (1);
    
}