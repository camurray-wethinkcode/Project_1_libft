
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char const	*new;

	if (s == NULL)
		return (NULL);
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	if (*s == '\0')
		return (ft_strnew(0));
	new = s + ft_strlen(s) - 1;
	while (*new == ' ' || *new == '\t' || *new == '\n')
		new--;
	return (ft_strsub(s, 0, new - s + 1));
}
