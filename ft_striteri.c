/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:18:45 by camurray          #+#    #+#             */
/*   Updated: 2019/06/06 10:22:18 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the striteri function.
** This function applies function f to every
** character in the string from an index given.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_striteri.c
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int j;

	j = 0;
	if (s == NULL || f == NULL)
		return ;
	while (*s)
	{
		f(j, s);
		s++;
		j++;
	}
}
/*
**void	iteration(unsigned int i, char *s)
**{
**	*s = *s + i;
**}
**
**int		main(void)
**{
**	char		str[] = "Hello";
**
**	ft_striteri(NULL, NULL);
**	ft_striteri(str, NULL);
**	ft_striteri(str, iteration);
**	if (strcmp(str, "Hfnos") != 0)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
