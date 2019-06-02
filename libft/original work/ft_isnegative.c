/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnegative.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:09:29 by camurray          #+#    #+#             */
/*   Updated: 2019/05/29 14:33:06 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** returns a nonzero if n is a negative integer
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_isnegative.c ft_putstr.c ft_putchar.c
*/

#include "libft.h"

void	ft_isnegative(int n)
{
	char	c;

	if (n < 0)
		c = 'N';
	else
		c = 'P';
	ft_putchar(c);
}
/*
**int		main(void)
**{
**	ft_putstr("\033[36mTest 1: input \"-6\"\n\033[0m");
**	ft_isnegative(-6);
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 2: input \"+6\"\n\033[0m");
**	ft_isnegative(+6);
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 3: input \"6\"\n\033[0m");
**	ft_isnegative(6);
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 4: input \"-+6\"\n\033[0m");
**	ft_isnegative(-+6);
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 5: input \"23154\"\n\033[0m");
**	ft_isnegative(23154);
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 6: input \"-264853\"\n\033[0m");
**	ft_isnegative(-264853);
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 7: input \"0\"\n\033[0m");
**	ft_isnegative(0);
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 8: input \"-0\"\n\033[0m");
**	ft_isnegative(-0);
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 9: input \"-1\"\n\033[0m");
**	ft_isnegative(-1);
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 10: input \"a\"\n\033[0m");
**	ft_isnegative('a');
**	ft_putchar('\n');
**}
*/
