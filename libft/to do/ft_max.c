
#include "libft.h"

int		ft_max(int *tab, int length)
{
	int	i;
	int	max;

	i = 0;
	max = tab[i];
	while (i < length)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
