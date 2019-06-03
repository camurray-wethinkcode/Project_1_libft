
#include "libft.h"

char	ft_strupper(char *str)
{
	int i;
	int down;

	i = 0;
	while (str[i])
	{
		down = str[i] - 32;
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = down;
		i++;
	}
	return (*str);
}
