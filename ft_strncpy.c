
#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, unsigned int len)
{
	unsigned int	i;

	i = 0;
	while (len > i && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
