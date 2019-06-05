/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:15:54 by camurray          #+#    #+#             */
/*   Updated: 2019/06/05 17:03:45 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation fo the putnbr function.
** This function prints int n on the standard output.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror ft_strlen.c
** ft_putnbr.c ft_putchar.c ft_putstr.c
*/

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}
/*
**int		main(void)
**{
**	ft_putstr("\033[36mTest 1: input \"1\"\n\033[0m");
**	ft_putnbr(1);
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 2: input \"-2147483648\"\n\033[0m");
**	ft_putnbr(-2147483648);
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 3: input \"2147483647\"\n\033[0m");
**	ft_putnbr(2147483647);
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 4: input \"1000\"\n\033[0m");
**	ft_putnbr(1000);
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 5: input \"1000000\"\n\033[0m");
**	ft_putnbr(1000000);
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 6: input \"999999\"\n\033[0m");
**	ft_putnbr(999999);
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 7: input \"-1\"\n\033[0m");
**	ft_putnbr(-1);
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 8: input \"+1\"\n\033[0m");
**	ft_putnbr(+1);
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 9: input \"+600\"\n\033[0m");
**	ft_putnbr(+600);
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 10: input \"-600\"\n\033[0m");
**	ft_putnbr(-600);
**	ft_putchar('\n');
**}
*/
