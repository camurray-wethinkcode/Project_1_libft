
#include "libft.h"

char	*ft_strcpy(char *dst, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
