/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:12:29 by camurray          #+#    #+#             */
/*   Updated: 2019/06/04 16:54:30 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the itoa function.
** This function converts a given integer into a character.
** Logic:
** 1) we create a separate function to retrieve the length of the input
**    using a simple loop, returning nonzero if the length is 0
**    and incrementing a counter as we iterate first through the ones,
**    then divide by 10 and iterate through the tens, then
**    divide by ten and iterate through the hundreds, etc until the
**    end of the number passed.
** 2) we use malloc to create a memory slot for our character and add one
**    to account for the end of string byte we need to add
** 3) we add a safeguard if our malloc fails so that the function returns null
** 4) we add an end of string byte to the end of our return character
** 5) we reset the length that we added one to so we can use it in a loop
** 6) we start from the first index of our character string
** 7) we note a sign if the given number is less than 0
** 8) we run through a loop and convert first the ones to char
**    by reversing the atoi algorithm and then repeat on then tens, hundreds...
** 9) we return our character string fully converted
** to test: uncomment main
** run gcc -Wall -Wextra -Werror ft_intlen.c ft_strnew.c
** ft_itoa.c ft_putstsr.c ft_strlen.c ft_memalloc.c ft_bzero.c
*/

#include "libft.h"

static int	length(int nb)
{
	int	s;

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

char		*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	num;

	len = length(n);
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
