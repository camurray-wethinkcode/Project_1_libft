/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:12:31 by camurray          #+#    #+#             */
/*   Updated: 2019/06/06 10:17:55 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the striter function.
** This function iterates over a string and applies
** function f to every character in the string.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_striter.c
*/

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int j;

	j = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[j])
	{
		f(&s[j]);
		j++;
	}
}
/*
**void	iteration(char *s)
**{
**	*s = *s + 1;
**}
**
**int		main(void)
**{
**	char		str[] = "Hello";
**
**	ft_striter(NULL, NULL);
**	ft_striter(str, NULL);
**	ft_striter(str, iteration);
**	if (strcmp(str, "Ifmmp") != 0)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
