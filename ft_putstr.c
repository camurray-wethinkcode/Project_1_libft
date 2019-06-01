/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:16:02 by camurray          #+#    #+#             */
/*   Updated: 2019/05/28 12:13:03 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** prints string s to the standard output
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_putstr.c ft_putchar.c
*/

#include "libft.h"

void	ft_putstr(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}
/*
**int		main(void)
**{
**	ft_putstr("\033[36mTest 1: input \"string\"\n\033[0m");
**	ft_putstr("string\n");
**	ft_putstr("\033[36mTest 2: input \"camurray@student.
**	wethinkcode.co.za\"\n\033[0m");
**	ft_putstr("camurray@student.wethinkcode.co.za\n");
**	ft_putstr("\033[36mTest 3: input \"!@#$%^&*()\"\n\033[0m");
**	ft_putstr("!@#$%^&*()\n");
**	ft_putstr("\033[36mTest 4: input \"1234567890\"\n\033[0m");
**	ft_putstr("1234567890\n");
**	ft_putstr("\033[36mTest 5: input \"a b c d e f g\"\n\033[0m");
**	ft_putstr("a b c d e f g\n");
**	ft_putstr("\033[36mTest 6: input \"hello	there\"\n\033[0m");
**	ft_putstr("hello	there\n");
**	ft_putstr("\033[36mTest 7: input \"c0d!nG !s Aw3s0mE\"\n\033[0m");
**	ft_putstr("c0d!nG !s Aw3s0mE\n");
**	ft_putstr("\033[36mTest 8: input \"\\ \" \\ \"\"\n\033[0m");
**	ft_putstr("\\ \" \\ \"\n");
**	ft_putstr("\033[36mTest 9: input \"..........\"\n\033[0m");
**	ft_putstr("..........\n");
**	ft_putstr("\033[36mTest 10: input \"4+2=42!\"\n\033[0m");
**	ft_putstr("4+2=42!\n");
**}
*/
