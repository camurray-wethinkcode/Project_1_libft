
#include "libft.h"

void	ft_putstr(char const *s)
{
	if (s == 0)
		return ;
	write(1, s, ft_strlen(s));
}
