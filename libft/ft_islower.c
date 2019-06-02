/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:09:08 by camurray          #+#    #+#             */
/*   Updated: 2019/05/28 12:14:06 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** returns a nonzero if c is a lowercase character
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_islower.c ft_putstr.c ft_putchar.c
*/

#include "libft.h"

int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z' ? 1 : 0);
}
/*
**int	main(void)
**{
**	ft_putstr("\033[36mTest 1: input \"a\"\n\033[0m");
**	printf("%d\n", islower('a'));
**	printf("%d\n", ft_islower('a'));
**	ft_putstr("\033[36mTest 2: input \"A\"\n\033[0m");
**	printf("%d\n", islower('A'));
**	printf("%d\n", ft_islower('A'));
**	ft_putstr("\033[36mTest 3: input \"0\"\n\033[0m");
**	printf("%d\n", islower('0'));
**	printf("%d\n", ft_islower('0'));
**	ft_putstr("\033[36mTest 4: input \"~\"\n\033[0m");
**	printf("%d\n", islower('~'));
**	printf("%d\n", ft_islower('~'));
**	ft_putstr("\033[36mTest 5: input \"z\"\n\033[0m");
**	printf("%d\n", islower('z'));
**	printf("%d\n", ft_islower('z'));
**	ft_putstr("\033[36mTest 6: input \"Z\"\n\033[0m");
**	printf("%d\n", islower('Z'));
**	printf("%d\n", ft_islower('Z'));
**	ft_putstr("\033[36mTest 7: input \" \"\n\033[0m");
**	printf("%d\n", islower(' '));
**	printf("%d\n", ft_islower(' '));
**	ft_putstr("\033[36mTest 8: input \"#\"\n\033[0m");
**	printf("%d\n", islower('#'));
**	printf("%d\n", ft_islower('#'));
**	ft_putstr("\033[36mTest 9: input \"[\"\n\033[0m");
**	printf("%d\n", islower('['));
**	printf("%d\n", ft_islower('['));
**	ft_putstr("\033[36mTest 10: input \".\"\n\033[0m");
**	printf("%d\n", islower('.'));
**	printf("%d\n", ft_islower('.'));
**}
*/
