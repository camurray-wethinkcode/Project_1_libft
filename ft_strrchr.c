
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	while (str[i] != c && i != 0)
		i--;
	if (str[i] == c)
		return ((char *)&str[i]);
	return (NULL);
}
