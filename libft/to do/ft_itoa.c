
#include "libft.h"

static int		get_size(int nb)
{
	int		s;

	if (nb == 0)
		return (1);
	s = 0;
	if (nb < 0)
		s = 1;
	while (nb)
	{
		s++;
		nb = nb / 10;
	}
	return (s);
}

char			*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	num;

	len = get_size(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	str[len] = '0';
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else
		num = n;
	while (num)
	{
		str[len] = ('0' + (num % 10));
		num = num / 10;
		len--;
	}
	return (str);
}
