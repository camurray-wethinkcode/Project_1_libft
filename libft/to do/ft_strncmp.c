
#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int		i;
	const unsigned char	*c1;
	const unsigned char	*c2;

	c1 = (const unsigned char *)s1;
	c2 = (const unsigned char *)s2;
	i = 0;
	while (n && (c1[i] != '\0' || c2[i] != '\0'))
	{
		if ((c1[i] > c2[i]) || c1[i] < c2[i])
			return (c1[i] - c2[i]);
		i++;
		n--;
	}
	return (0);
}
