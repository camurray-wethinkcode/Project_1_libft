/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispowerof2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:10:13 by camurray          #+#    #+#             */
/*   Updated: 2019/06/04 15:42:27 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This is an extra function and is not part of the
** mandatory functions we need to recreate in the
** libft project at wethinkcode.
** This function returns nonzero if n is a power of 2.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_ispowerof2.c ft_putstr.c ft_putchar.c
*/

#include "libft.h"

int	ft_ispowerof2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	return ((n == 1) ? 1 : 0);
}
/*
**int	main(void)
**{
**	ft_putstr("\033[36mTest 1: input \"36\"\n\033[0m");
**	printf("%d\n", ft_ispowerof2(36));
**	ft_putstr("\033[36mTest 2: input \"0\"\n\033[0m");
**	printf("%d\n", ft_ispowerof2(0));
**	ft_putstr("\033[36mTest 3: input \"482\"\n\033[0m");
**	printf("%d\n", ft_ispowerof2(482));
**	ft_putstr("\033[36mTest 4: input \"16\"\n\033[0m");
**	printf("%d\n", ft_ispowerof2(16));
**	ft_putstr("\033[36mTest 5: input \"64\"\n\033[0m");
**	printf("%d\n", ft_ispowerof2(64));
**	ft_putstr("\033[36mTest 6: input \"262144\"\n\033[0m");
**	printf("%d\n", ft_ispowerof2(262144));
**	ft_putstr("\033[36mTest 7: input \"a\"\n\033[0m");
**	printf("%d\n", ft_ispowerof2('a'));
**	ft_putstr("\033[36mTest 8: input \"z\"\n\033[0m");
**	printf("%d\n", ft_ispowerof2('z'));
**	ft_putstr("\033[36mTest 9: input \"4096\"\n\033[0m");
**	printf("%d\n", ft_ispowerof2(4096));
**	ft_putstr("\033[36mTest 10: input \"00000\"\n\033[0m");
**	printf("%d\n", ft_ispowerof2(00000));
**}
*/
