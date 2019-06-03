/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:12:29 by camurray          #+#    #+#             */
/*   Updated: 2019/05/31 14:00:17 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** converts an integer to a character
** to test: uncomment main
** run gcc -Wall -Wextra -Werror ft_intlen.c ft_strnew.c
** ft_itoa.c ft_putstsr.c ft_putchar.c ft_memalloc.c ft_bzero.c
*/

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*s;
	int		len;

	len = ft_intlen(n);
	s = ft_strnew(len);
	if (s == NULL)
		return (NULL);
	if (n < 0)
		s[0] = '-';
	else
		n = 0 - n;
	while (n / 10)
	{
		s[--len] = (0 - (n % 10)) + '0';
		n /= 10;
	}
	s[--len] = (0 - (n % 10)) + '0';
	return (s);
}
/*
**int		main(void)
**{
**	ft_putstr("\033[36mTest 1: input \"+2798\"\n\033[0m");
**	printf("%s\n", ft_itoa(+2798));
**	ft_putstr("\033[36mTest 2: input \"-2798\"\n\033[0m");
**	printf("%s\n", ft_itoa(-2798));
**	ft_putstr("\033[36mTest 3: input \"0\"\n\033[0m");
**	printf("%s\n", ft_itoa(0));
**	ft_putstr("\033[36mTest 4: input \"+-2798\"\n\033[0m");
**	printf("%s\n", ft_itoa(+-2798));
**	ft_putstr("\033[36mTest 5: input \"-+2798\"\n\033[0m");
**	printf("%s\n", ft_itoa(-+2798));
**	ft_putstr("\033[36mTest 6: input \"t\"\n\033[0m");
**	printf("%s\n", ft_itoa('t'));
**	ft_putstr("\033[36mTest 7: input \"2798\"\n\033[0m");
**	printf("%s\n", ft_itoa(2798));
**	ft_putstr("\033[36mTest 8: input \"0000\"\n\033[0m");
**	printf("%s\n", ft_itoa(0000));
**	ft_putstr("\033[36mTest 9: input \"8\"\n\033[0m");
**	printf("%s\n", ft_itoa(8));
**	ft_putstr("\033[36mTest 10: input \"999999\"\n\033[0m");
**	printf("%s\n", ft_itoa(999999));
**}
*/