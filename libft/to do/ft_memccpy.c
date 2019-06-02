
#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	while (n > 0)
	{
		if ((*str1++ = *str2++) == (unsigned char)c)
			return (str1);
		n--;
	}
	return (NULL);
}
