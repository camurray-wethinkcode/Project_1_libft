/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:09:15 by camurray          #+#    #+#             */
/*   Updated: 2019/05/28 09:21:56 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** returns nonzero if c is an uppercase character
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_isupper.c ft_putstr.c ft_putchar.c
*/

#include "libft.h"

int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z' ? 1 : 0);
}
/*
**int	main(void)
**{
**	ft_putstr("\033[36mTest 1: input\"a\"\n\033[0m");
**	printf("%d\n", isupper('a'));
**	printf("%d\n", ft_isupper('a'));
**	ft_putstr("\033[36mTest 2: input\"A\"\n\033[0m");
**	printf("%d\n", isupper('A'));
**	printf("%d\n", ft_isupper('A'));
**	ft_putstr("\033[36mTest 3: input\"0\"\n\033[0m");
**	printf("%d\n", isupper('0'));
**	printf("%d\n", ft_isupper('0'));
**	ft_putstr("\033[36mTest 4: input\"~\"\n\033[0m");
**	printf("%d\n", isupper('~'));
**	printf("%d\n", ft_isupper('~'));
**	ft_putstr("\033[36mTest 5: input\"z\"\n\033[0m");
**	printf("%d\n", isupper('z'));
**	printf("%d\n", ft_isupper('z'));
**	ft_putstr("\033[36mTest 6: input\"Z\"\n\033[0m");
**	printf("%d\n", isupper('Z'));
**	printf("%d\n", ft_isupper('Z'));
**	ft_putstr("\033[36mTest 7: input\" \"\n\033[0m");
**	printf("%d\n", isupper(' '));
**	printf("%d\n", ft_isupper(' '));
**	ft_putstr("\033[36mTest 8: input\"#\"\n\033[0m");
**	printf("%d\n", isupper('#'));
**	printf("%d\n", ft_isupper('#'));
**	ft_putstr("\033[36mTest 9: input\"[\"\n\033[0m");
**	printf("%d\n", isupper('['));
**	printf("%d\n", ft_isupper('['));
**	ft_putstr("\033[36mTest 10: input\".\"\n\033[0m");
**	printf("%d\n", isupper('.'));
**	printf("%d\n", ft_isupper('.'));
**}
*/
