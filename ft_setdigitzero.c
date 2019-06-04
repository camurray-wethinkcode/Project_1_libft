/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setdigitzero.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 16:05:11 by camurray          #+#    #+#             */
/*   Updated: 2019/06/04 16:18:24 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This is an extra function and is not part of the
** mandatory functions we need to recreate in the
** libft project at wethinkcode.
** This function receives an integer character or a digit
** as input and sets it equal to zero again (resets it).
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_setdigitzero.c ft_strlen.c ft_putstr.c
*/

#include "libft.h"

int	ft_setdigitzero(int c)
{
	if (c >= '0' && c <= '9')
	{
		c = 0;
		return (c);
	}
	else
		return (0);
}
/*
**int	main(void)
**{
**	int	test1;
**	int	test2;
**	int	test3;
**	int	test4;
**	int	test5;
**	int	test6;
**	int	test7;
**	int	test8;
**	int	test9;
**	int	test10;
**
**	test1 = 0;
**	test2 = 1;
**	test3 = 2;
**	test4 = 3;
**	test5 = 4;
**	test6 = 5;
**	test7 = 6;
**	test8 = 7;
**	test9 = 8;
**	test10 = 9;
**	ft_putstr("\033[36mTest 1: input \"0\"\n\033[0m");
**	printf("%d\n", ft_setdigitzero(test1));
**	ft_putstr("\033[36mTest 2: input \"1\"\n\033[0m");
**	printf("%d\n", ft_setdigitzero(test2));
**	ft_putstr("\033[36mTest 3: input \"2\"\n\033[0m");
**	printf("%d\n", ft_setdigitzero(test3));
**	ft_putstr("\033[36mTest 4: input \"3\"\n\033[0m");
**	printf("%d\n", ft_setdigitzero(test4));
**	ft_putstr("\033[36mTest 5: input \"4\"\n\033[0m");
**	printf("%d\n", ft_setdigitzero(test5));
**	ft_putstr("\033[36mTest 6: input \"5\"\n\033[0m");
**	printf("%d\n", ft_setdigitzero(test6));
**	ft_putstr("\033[36mTest 7: input \"6\"\n\033[0m");
**	printf("%d\n", ft_setdigitzero(test7));
**	ft_putstr("\033[36mTest 8: input \"7\"\n\033[0m");
**	printf("%d\n", ft_setdigitzero(test8));
**	ft_putstr("\033[36mTest 9: input \"8\"\n\033[0m");
**	printf("%d\n", ft_setdigitzero(test9));
**	ft_putstr("\033[36mTest 10: input \"9\"\n\033[0m");
**	printf("%d\n", ft_setdigitzero(test10));
**}
*/
