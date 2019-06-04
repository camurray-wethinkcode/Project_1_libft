/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:11:30 by camurray          #+#    #+#             */
/*   Updated: 2019/06/04 16:28:42 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the isprint function.
** Input is a single character that needs to be checked.
** To check if it is a printable character on the ascii table.
** Printable characters on the ascii table are between 32 and 126.
** This function returns nonzero if c is printable.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_isprint.c ft_putstr.c ft_strlen.c
*/

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126 ? 1 : 0);
}
/*
**int	main(void)
**{
**	ft_putstr("\033[36mTest 1: input \"a\"\n\033[0m");
**	printf("%d\n", isprint('a'));
**	printf("%d\n", ft_isprint('a'));
**	ft_putstr("\033[36mTest 2: input \"0\"\n\033[0m");
**	printf("%d\n", isprint('0'));
**	printf("%d\n", ft_isprint('0'));
**	ft_putstr("\033[36mTest 3: input \".\"\n\033[0m");
**	printf("%d\n", isprint('.'));
**	printf("%d\n", ft_isprint('.'));
**	ft_putstr("\033[36mTest 4: input \" \"\n\033[0m");
**	printf("%d\n", isprint(' '));
**	printf("%d\n", ft_isprint(' '));
**	ft_putstr("\033[36mTest 5: input \"ascii 231\"\n\033[0m");
**	printf("%d\n", isprint(231));
**	printf("%d\n", ft_isprint(231));
**	ft_putstr("\033[36mTest 6: input \"ascii 12\"\n\033[0m");
**	printf("%d\n", isprint(12));
**	printf("%d\n", ft_isprint(12));
**	ft_putstr("\033[36mTest 7: input \" \" \"\n\033[0m");
**	printf("%d\n", isprint('\"'));
**	printf("%d\n", ft_isprint('\"'));
**	ft_putstr("\033[36mTest 8: input \"W\"\n\033[0m");
**	printf("%d\n", isprint('W'));
**	printf("%d\n", ft_isprint('W'));
**	ft_putstr("\033[36mTest 9: input \"ascii 94\"\n\033[0m");
**	printf("%d\n", isprint(94));
**	printf("%d\n", ft_isprint(94));
**	ft_putstr("\033[36mTest 10: input \"ascii 26\"\n\033[0m");
**	printf("%d\n", isprint(26));
**	printf("%d\n", ft_isprint(26));
**}
*/
