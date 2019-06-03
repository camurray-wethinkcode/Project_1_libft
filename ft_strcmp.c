//#include <stdio.h>
#include "libft.h"

int		ft_strcmp(char const *s1, char const *s2)
{
	while (*s1 == *s2)
	{
		++s1;
		++s2;
		if (*s1 == 0 && *s2 == 0)
			return (0);
	}
	return  * (unsigned char *)s1 < *(unsigned char *)s2 ? -1 : 1;
}
/*
int		main(void)
{
	printf("%d\n", ft_strcmp("cba", "abc"));
	printf("%d\n", strcmp("cba", "abc"));
	printf("%d\n", ft_strcmp("a", "abcde"));
	printf("%d\n", strcmp("a", "abcde"));
}
*/
