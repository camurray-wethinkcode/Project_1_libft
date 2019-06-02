
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int j;

	j = 0;
	if (s == NULL || f == NULL)
		return ;
	while (*s)
	{
		f(j, s);
		s++;
		j++;
	}
}
