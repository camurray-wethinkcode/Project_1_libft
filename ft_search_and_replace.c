
#include "libft.h"

char	ft_search_and_replace(char *str, char a, char b)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == a)
			str[i] = b;
		i++;
	}
	return (*str);
}
