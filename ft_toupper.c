/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:21:42 by camurray          #+#    #+#             */
/*   Updated: 2019/06/05 17:13:18 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the toupper function.
** This function returns the corresponding
** uppercase letter if one exists.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror ft_islower.c
** ft_toupper.c ft_putstr.c ft_strlen.c
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}
/*
**int	main(void)
**{
**	ft_putstr("\033[36mTest 1: input \"a\"\n\033[0m");
**	printf("%d\n", toupper('a'));
**	printf("%d\n", ft_toupper('a'));
**	ft_putstr("\033[36mTest 2: input \"A\"\n\033[0m");
**	printf("%d\n", toupper('A'));
**	printf("%d\n", ft_toupper('A'));
**	ft_putstr("\033[36mTest 3: input \"Z\"\n\033[0m");
**	printf("%d\n", toupper('Z'));
**	printf("%d\n", ft_toupper('Z'));
**	ft_putstr("\033[36mTest 4: input \"z\"\n\033[0m");
**	printf("%d\n", toupper('z'));
**	printf("%d\n", ft_toupper('z'));
**	ft_putstr("\033[36mTest 5: input \" \"\n\033[0m");
**	printf("%d\n", toupper(' '));
**	printf("%d\n", ft_toupper(' '));
**	ft_putstr("\033[36mTest 6: input \"0\"\n\033[0m");
**	printf("%d\n", toupper('0'));
**	printf("%d\n", ft_toupper('0'));
**	ft_putstr("\033[36mTest 7: input \"7\"\n\033[0m");
**	printf("%d\n", toupper('7'));
**	printf("%d\n", ft_toupper('7'));
**	ft_putstr("\033[36mTest 8: input \"(\"\n\033[0m");
**	printf("%d\n", toupper('('));
**	printf("%d\n", ft_toupper('('));
**	ft_putstr("\033[36mTest 9: input \"@\"\n\033[0m");
**	printf("%d\n", toupper('@'));
**	printf("%d\n", ft_toupper('@'));
**	ft_putstr("\033[36mTest 10: input \".\"\n\033[0m");
**	printf("%d\n", toupper('.'));
**	printf("%d\n", ft_toupper('.'));
**	ft_putstr("\033[36mTest 11: input \"!\"\n\033[0m");
**	printf("%d\n", toupper('!'));
**	printf("%d\n", ft_toupper('!'));
**	ft_putstr("\033[36mTest 12: input \"*\"\n\033[0m");
**	printf("%d\n", toupper('*'));
**	printf("%d\n", ft_toupper('*'));
**	ft_putstr("\033[36mTest 13: input \"t\"\n\033[0m");
**	printf("%d\n", toupper('t'));
**	printf("%d\n", ft_toupper('t'));
**	ft_putstr("\033[36mTest 14: input \",\"\n\033[0m");
**	printf("%d\n", toupper(','));
**	printf("%d\n", ft_toupper(','));
**	ft_putstr("\033[36mTest 15: input \"?\"\n\033[0m");
**	printf("%d\n", toupper('?'));
**	printf("%d\n", ft_toupper('?'));
**	ft_putstr("\033[36mTest 16: input \"/\"\n\033[0m");
**	printf("%d\n", toupper('/'));
**	printf("%d\n", ft_toupper('/'));
**	ft_putstr("\033[36mTest 17: input \"I\"\n\033[0m");
**	printf("%d\n", toupper('I'));
**	printf("%d\n", ft_toupper('I'));
**	ft_putstr("\033[36mTest 18: input \"X\"\n\033[0m");
**	printf("%d\n", toupper('X'));
**	printf("%d\n", ft_toupper('X'));
**	ft_putstr("\033[36mTest 19: input \"-\"\n\033[0m");
**	printf("%d\n", toupper('-'));
**	printf("%d\n", ft_toupper('-'));
**	ft_putstr("\033[36mTest 20: input \"5\"\n\033[0m");
**	printf("%d\n", toupper('5'));
**	printf("%d\n", ft_toupper('5'));
**}
*/
