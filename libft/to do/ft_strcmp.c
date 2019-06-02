
#include "libft.h"

int		ft_strcmp(char const *s1, char const *s2)
{
	int					i;
	const unsigned char	*c1;
	const unsigned char	*c2;

	c1 = (const unsigned char *)s1;
	c2 = (const unsigned char *)s2;
	i = 0;
	while (c1[i] && c1[i] == c2[i])
		i++;
	return (c1[i] - c2[i]);
}
