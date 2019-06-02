
#include "libft.h"

int		ft_tolower(int c)
{
	int i;

	i = 0;
	if (c >= 65 && c <= 90)
		i = c + 32;
	else
		return (c);
	return (i);
}
