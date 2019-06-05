/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:21:36 by camurray          #+#    #+#             */
/*   Updated: 2019/06/05 17:11:59 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation fo the tolower function.
** This function returns the corresponding
** lowercase letter if one exists.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror ft_isupper.c
** ft_tolower.c ft_putstr.c ft_strlen.c
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}
/*
**int	main(void)
**{
**	ft_putstr("\033[36mTest 1: input \"a\"\n\033[0m");
**	printf("%d\n", tolower('a'));
**	printf("%d\n", ft_tolower('a'));
**	ft_putstr("\033[36mTest 2: input \"A\"\n\033[0m");
**	printf("%d\n", tolower('A'));
**	printf("%d\n", ft_tolower('A'));
**	ft_putstr("\033[36mTest 3: input \"Z\"\n\033[0m");
**	printf("%d\n", tolower('Z'));
**	printf("%d\n", ft_tolower('Z'));
**	ft_putstr("\033[36mTest 4: input \"z\"\n\033[0m");
**	printf("%d\n", tolower('z'));
**	printf("%d\n", ft_tolower('z'));
**	ft_putstr("\033[36mTest 5: input \" \"\n\033[0m");
**	printf("%d\n", tolower(' '));
**	printf("%d\n", ft_tolower(' '));
**	ft_putstr("\033[36mTest 6: input \"0\"\n\033[0m");
**	printf("%d\n", tolower('0'));
**	printf("%d\n", ft_tolower('0'));
**	ft_putstr("\033[36mTest 7: input \"7\"\n\033[0m");
**	printf("%d\n", tolower('7'));
**	printf("%d\n", ft_tolower('7'));
**	ft_putstr("\033[36mTest 8: input \"(\"\n\033[0m");
**	printf("%d\n", tolower('('));
**	printf("%d\n", ft_tolower('('));
**	ft_putstr("\033[36mTest 9: input \"@\"\n\033[0m");
**	printf("%d\n", tolower('@'));
**	printf("%d\n", ft_tolower('@'));
**	ft_putstr("\033[36mTest 10: input \".\"\n\033[0m");
**	printf("%d\n", tolower('.'));
**	printf("%d\n", ft_tolower('.'));
**	ft_putstr("\033[36mTest 11: input \"!\"\n\033[0m");
**	printf("%d\n", tolower('!'));
**	printf("%d\n", ft_tolower('!'));
**	ft_putstr("\033[36mTest 12: input \"*\"\n\033[0m");
**	printf("%d\n", tolower('*'));
**	printf("%d\n", ft_tolower('*'));
**	ft_putstr("\033[36mTest 13: input \"t\"\n\033[0m");
**	printf("%d\n", tolower('t'));
**	printf("%d\n", ft_tolower('t'));
**	ft_putstr("\033[36mTest 14: input \",\"\n\033[0m");
**	printf("%d\n", tolower(','));
**	printf("%d\n", ft_tolower(','));
**	ft_putstr("\033[36mTest 15: input \"?\"\n\033[0m");
**	printf("%d\n", tolower('?'));
**	printf("%d\n", ft_tolower('?'));
**	ft_putstr("\033[36mTest 16: input \"/\"\n\033[0m");
**	printf("%d\n", tolower('/'));
**	printf("%d\n", ft_tolower('/'));
**	ft_putstr("\033[36mTest 17: input \"I\"\n\033[0m");
**	printf("%d\n", tolower('I'));
**	printf("%d\n", ft_tolower('I'));
**	ft_putstr("\033[36mTest 18: input \"X\"\n\033[0m");
**	printf("%d\n", tolower('X'));
**	printf("%d\n", ft_tolower('X'));
**	ft_putstr("\033[36mTest 19: input \"-\"\n\033[0m");
**	printf("%d\n", tolower('-'));
**	printf("%d\n", ft_tolower('-'));
**	ft_putstr("\033[36mTest 20: input \"5\"\n\033[0m");
**	printf("%d\n", tolower('5'));
**	printf("%d\n", ft_tolower('5'));
**}
*/
