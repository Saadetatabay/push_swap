#include "push_swap.h"
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!d && !s)
		return (NULL);
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}

int	ft_isdigit(int c)
{
	if (c < 58 && c > 47)
	{
		return (1);
	}
	return (0);
}