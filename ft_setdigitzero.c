
#include "libft.h"

int		ft_setdigitzero(int c)
{
	if (c >= 48 && c <= 57)
	{
		c = 0;
		return (c);
	}
	else
		return (0);
}
