
#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	unsigned	int j;
	unsigned	int i;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
