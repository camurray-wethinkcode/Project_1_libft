
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				j;
	unsigned char	*str;

	str = (unsigned char *)b;
	j = 0;
	while (len > 0)
	{
		str[j] = c;
		len--;
		j++;
	}
	return (b);
}
