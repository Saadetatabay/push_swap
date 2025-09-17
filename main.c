#include<unistd.h>

int main(int argc,char **argv)
{
    if (argc == 1)
        return(1); //argüman yok
    if(argc == 2 && !*argv[1])
        return(1); //string vermiş ama boş
    char	**numb;
    if(argc == 2)
    {
        numb = ft_split(argv[1],' ');
    }
}