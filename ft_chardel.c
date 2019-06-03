
#include "libft.h"

char	ft_chardel(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		c = '\0';
		return (c);
	}
	else
		return (0);
}
