
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*new;
	size_t	i;

	new = NULL;
	new = (char *)malloc(size);
	if (new)
	{
		i = 0;
		while (size-- > 0)
		{
			new[i] = 0;
			i++;
		}
	}
	return (new);
}
