/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:10:58 by camurray          #+#    #+#             */
/*   Updated: 2019/06/04 15:32:39 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the isascii function.
** Input is a single character that needs to be checked.
** To check if it is a character on the ascii table.
** Tests if c is within the 7 bit US ASCII range
** which is from 0 to 127 and returns nonzero if yes.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_isascii.c ft_putstr.c ft_strlen.c
*/

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127 ? 1 : 0);
}
/*
**int	main(void)
**{
**	ft_putstr("\033[36mTest 1: input \"a\"\n\033[0m");
**	printf("%d\n", isascii('a'));
**	printf("%d\n", ft_isascii('a'));
**	ft_putstr("\033[36mTest 2: input the decimal ascii value 1\n\033[0m");
**	printf("%d\n", isascii(1));
**	printf("%d\n", ft_isascii(1));
**	ft_putstr("\033[36mTest 3: input \"^\"\n\033[0m");
**	printf("%d\n", isascii('^'));
**	printf("%d\n", ft_isascii('^'));
**	ft_putstr("\033[36mTest 4: input \"{\"\n\033[0m");
**	printf("%d\n", isascii('{'));
**	printf("%d\n", ft_isascii('{'));
**	ft_putstr("\033[36mTest 5: input \"&\"\n\033[0m");
**	printf("%d\n", isascii('&'));
**	printf("%d\n", ft_isascii('&'));
**	ft_putstr("\033[36mTest 6: input \"7\"\n\033[0m");
**	printf("%d\n", isascii('7'));
**	printf("%d\n", ft_isascii('7'));
**	ft_putstr("\033[36mTest 7: input \".\"\n\033[0m");
**	printf("%d\n", isascii('.'));
**	printf("%d\n", ft_isascii('.'));
**	ft_putstr("\033[36mTest 8: input \"Q\"\n\033[0m");
**	printf("%d\n", isascii('Q'));
**	printf("%d\n", ft_isascii('Q'));
**	ft_putstr("\033[36mTest 9: input \" \"\n\033[0m");
**	printf("%d\n", isascii(' '));
**	printf("%d\n", ft_isascii(' '));
**	ft_putstr("\033[36mTest 10: input \" \" \"\n\033[0m");
**	printf("%d\n", isascii('\"'));
**	printf("%d\n", ft_isascii('\"'));
**}
*/
