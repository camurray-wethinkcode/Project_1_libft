
#include "libft.h"

int		ft_toupper(int c)
{
	int i;

	i = 0;
	if (c >= 97 && c <= 122)
		i = c - 32;
	else
		return (c);
	return (i);
}
