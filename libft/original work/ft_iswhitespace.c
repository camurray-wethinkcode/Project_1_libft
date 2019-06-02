/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:11:47 by camurray          #+#    #+#             */
/*   Updated: 2019/05/29 15:11:06 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** returns nonzero if c is any whitespace character
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_iswhitespace.c ft_putstr.c ft_putchar.c
*/

#include "libft.h"

int	ft_iswhitespace(int c)
{
	if (c >= 9 && c <= 13)
		return (1);
	else if (c == ' ')
		return (1);
	return (0);
}
/*
**int	main(void)
**{
**	ft_putstr("\033[36mTest 1: input \"a\"\n\033[0m");
**	printf("%d\n", isspace('a'));
**	printf("%d\n", ft_iswhitespace('a'));
**	ft_putstr("\033[36mTest 2: input \"0\"\n\033[0m");
**	printf("%d\n", isspace('0'));
**	printf("%d\n", ft_iswhitespace('0'));
**	ft_putstr("\033[36mTest 3: input \" \"\n\033[0m");
**	printf("%d\n", isspace(' '));
**	printf("%d\n", ft_iswhitespace(' '));
**	ft_putstr("\033[36mTest 4: input \"?\"\n\033[0m");
**	printf("%d\n", isspace('?'));
**	printf("%d\n", ft_iswhitespace('?'));
**	ft_putstr("\033[36mTest 5: input \"ascii 12\"\n\033[0m");
**	printf("%d\n", isspace(12));
**	printf("%d\n", ft_iswhitespace(12));
**	ft_putstr("\033[36mTest 6: input \"ascii 16\"\n\033[0m");
**	printf("%d\n", isspace(16));
**	printf("%d\n", ft_iswhitespace(16));
**	ft_putstr("\033[36mTest 7: input \"ascii 32\"\n\033[0m");
**	printf("%d\n", isspace(32));
**	printf("%d\n", ft_iswhitespace(32));
**	ft_putstr("\033[36mTest 8: input \"ascii 90\"\n\033[0m");
**	printf("%d\n", isspace(90));
**	printf("%d\n", ft_iswhitespace(90));
**	ft_putstr("\033[36mTest 9: input \"ascii 1\"\n\033[0m");
**	printf("%d\n", isspace(1));
**	printf("%d\n", ft_iswhitespace(1));
**	ft_putstr("\033[36mTest 10: input \"ascii 7\"\n\033[0m");
**	printf("%d\n", isspace(7));
**	printf("%d\n", ft_iswhitespace(7));
**}
*/
