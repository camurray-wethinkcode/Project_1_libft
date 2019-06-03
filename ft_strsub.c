
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	new = (char *)malloc(sizeof(char) * len + 1);
	if (new == NULL)
		return (NULL);
	while (i < len)
	{
		new[i] = s[i + start];
		i++;
	}
	new[i] = '\0';
	return (new);
}
