
#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int j;

	j = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[j])
	{
		f(&s[j]);
		j++;
	}
}
