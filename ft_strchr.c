/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 17:30:01 by camurray          #+#    #+#             */
/*   Updated: 2019/06/05 17:36:15 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation fo the strchr function.
** This functions earches a string for a character.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_strchr.c
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
/*
**int		main(void)
**{
**	char	str[] = "Hello je tesx";
**
**	if (strchr(str, 'H') != ft_strchr(str, 'H'))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (strchr(str, 'j') != ft_strchr(str, 'j'))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (strchr(str, 'x') != ft_strchr(str, 'x'))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (strchr(str, 'y') != ft_strchr(str, 'y'))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (strchr(str, 0) != ft_strchr(str, 0))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
