
#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	unsigned int	count;
	int				i;
	int				j;

	count = 0;
	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (to_find[count])
		count++;
	while (str[i] && len >= count)
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
		len--;
	}
	return (NULL);
}
