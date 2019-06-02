
#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int n;

	n = 0;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	n = (unsigned int)nb;
	if (n < 10)
		ft_putchar_fd(n + 48, fd);
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + 48, fd);
	}
}
