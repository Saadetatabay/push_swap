#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#define INT_MIN -2147483648
#define INT_MAX  2147483647

#include<stdlib.h>
#include<unistd.h>

typedef struct s_node
{
    int				value;
	struct s_node	*next;
}t_node;

void	*ft_memcpy(void *dest, const void *src, size_t n);
char	**ft_split(char const *s, char c);
int	ft_atoi(const char *nptr);
int	ft_isdigit(int c);
int	ft_isnum(char *str);
void    ft_error();
int ft_dup(int indis,int num,char **argv);

#endif