
#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;

	if (n == 0 || s1 == s2)
		return (s1);
	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	while (n)
	{
		*st1 = *st2;
		st1++;
		st2++;
		n--;
	}
	return (s1);
}
