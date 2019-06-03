
#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char	*str;
	unsigned char	c1;
	int				j;

	j = 0;
	str = (unsigned char *)s;
	c1 = (unsigned char)c;
	while (n)
	{
		if (str[j] == c1)
			return (str + j);
		n--;
		j++;
	}
	return (0);
}
