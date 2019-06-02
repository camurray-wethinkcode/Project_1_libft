
#include "libft.h"

int		ft_min(int *tab, int length)
{
	int	i;
	int	min;

	i = 0;
	min = tab[i];
	while (i < length)
	{
		if (tab[i] < min)
			min = tab[i];
		i++;
	}
	return (min);
}
