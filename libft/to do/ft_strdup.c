
#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*s;
	int		i;

	i = 0;
	while (str[i])
		i++;
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (s == 0)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
