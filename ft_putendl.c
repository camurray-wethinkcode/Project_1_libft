/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:49:25 by camurray          #+#    #+#             */
/*   Updated: 2019/06/06 11:53:13 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the putendl function.
** This function outputs a string on the
** standard output followed by a newline.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_putendl.c ft_putstr.c ft_strlen.c
*/

#include "libft.h"

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	write(1, "\n", 1);
}

/*
**int		main(void)
**{
**	ft_putstr("\033[36mTest 1: input \"a\"\n\033[0m");
**	putendl('a');
**	ft_putendl('a');
**	ft_putstr("\033[36mTest 2: input \"1\"\n\033[0m");
**	putendl('1');
**	ft_putendl('1');
**	ft_putstr("\033[36mTest 3: input \"0\"\n\033[0m");
**	putendl('0');
**	ft_putendl('0');
**	ft_putstr("\033[36mTest 4: input \"%\"\n\033[0m");
**	putendl('%');
**	ft_putendl('%');
**	ft_putstr("\033[36mTest 5: input \"$\"\n\033[0m");
**	putendl('$');
**	ft_putendl('$');
**	ft_putstr("\033[36mTest 6: input \"A\"\n\033[0m");
**	putendl('A');
**	ft_putendl('A');
**	ft_putstr("\033[36mTest 7: input \"~\"\n\033[0m");
**	putendl('~');
**	ft_putendl('~');
**	ft_putstr("\033[36mTest 8: input \"[\"\n\033[0m");
**	putendl('[');
**	ft_putendl('[');
**	ft_putstr("\033[36mTest 9: input \"\\\"\n\033[0m");
**	putendl('\\');
**	ft_putendl('\\');
**	ft_putstr("\033[36mTest 10: input \"^\"\n\033[0m");
**	putendl('^');
**	ft_putendl('^');
**}
*/
