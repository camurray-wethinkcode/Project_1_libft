
#include "libft.h"

char	ft_strlower(char *str)
{
	int i;
	int up;

	i = 0;
	while (str[i])
	{
		up = str[i] + 32;
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = up;
		i++;
	}
	return (*str);
}
