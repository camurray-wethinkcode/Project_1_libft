/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:16:40 by camurray          #+#    #+#             */
/*   Updated: 2019/06/06 11:19:55 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the strnequ function.
** The same as strequ but has an added index.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_strnequ.c ft_strncmp.c
*/

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	if (ft_strncmp(s1, s2, n) == 0)
		return (1);
	else
		return (0);
}
/*
**int		main(void)
**{
**	int			ret;
**
**	ft_strnequ(NULL, NULL, 0);
**	ft_strnequ(NULL, NULL, 1);
**	ft_strnequ(NULL, "", 1);
**	ft_strnequ("", NULL, 1);
**	ret = 0;
**	if ((ret = ft_strnequ("abc", "abc", 2)) != 1)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if ((ret = ft_strnequ("cba", "abc", 2)) != 0)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if ((ret = ft_strnequ("abc", "cba", 2)) != 0)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if ((ret = ft_strnequ("abc", "abd", 2)) != 1)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if ((ret = ft_strnequ("", "", 3)) != 1)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
