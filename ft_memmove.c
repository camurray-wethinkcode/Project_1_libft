
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *pd;
	char *ps;

	if (dst == src)
		return (dst);
	pd = (char *)dst;
	ps = (char *)src;
	if (src <= dst)
	{
		ps += len - 1;
		pd += len - 1;
		while (len--)
			*pd-- = *ps--;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
