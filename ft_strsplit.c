
#include "libft.h"

static int		ft_count(char const *s, char c)
{
	int count;

	count = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			count++;
		s++;
	}
	return (count);
}

static int		ft_length(char const *str, char c)
{
	int n;

	n = 0;
	if (!str)
		return (0);
	while (str[n] != c && str[n])
		n++;
	return (n);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		words;
	char	**new;

	i = 0;
	if (!s || !c)
		return (0);
	words = ft_count(s, c);
	new = (char **)malloc(sizeof(char *) * (words + 1));
	if (new == NULL)
		return (NULL);
	while (i < words)
	{
		while (*s == c && *s)
			s++;
		new[i] = (char *)malloc(sizeof(char) * (ft_length(s, c) + 1));
		j = 0;
		while (*s != c && *s)
			new[i][j++] = *s++;
		new[i][j] = '\0';
		i++;
	}
	new[i] = 0;
	return (new);
}
