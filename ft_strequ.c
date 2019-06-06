/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:03:43 by camurray          #+#    #+#             */
/*   Updated: 2019/06/06 10:11:40 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the strequ function.
** This function lexicographically compares two strings
** to test if they are identical.
** In the main function the line
** str = strdup("abc") fixes a false positive
** for if s1 == s2 retun 1.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_strequ.c ft_strlen.c ft_strcmp.c
*/

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2 || (ft_strlen(s1) != ft_strlen(s2)))
		return (0);
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	else
		return (0);
}
/*
**int		main(void)
**{
**	int			ret;
**	char		*str;
**
**	ft_strequ(NULL, NULL);
**	ft_strequ("", NULL);
**	ft_strequ(NULL, "");
**	ret = 0;
**	str = strdup("abc");
**
**	if ((ret = ft_strequ(str, "abc")) != 1)
**	{
**		write(1, "It doesn't work\n", 16);
**		free(str);
**		return (0);
**	}
**	free(str);
**	if ((ret = ft_strequ("cba", "abc")) != 0)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if ((ret = ft_strequ("abc", "cba")) != 0)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if ((ret = ft_strequ("", "")) != 1)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if ((ret = ft_strequ("abc", "abcd")) != 0)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if ((ret = ft_strequ("abcd", "abc")) != 0)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
