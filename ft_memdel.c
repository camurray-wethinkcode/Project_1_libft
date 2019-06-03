
#include "libft.h"

void	ft_memdel(void **ap)
{
	if (!ap || !*ap)
		return ;
	else
	{
		free(*ap);
		*ap = NULL;
	}
}
