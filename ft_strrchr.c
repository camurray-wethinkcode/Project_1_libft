/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:44:09 by camurray          #+#    #+#             */
/*   Updated: 2019/06/06 11:48:27 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the strrchr function.
** This function locates the last occurence of c in a string.
** to ttest: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_strrchr.c
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	while (s[i] != c && i != 0)
		i--;
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}
/*
**int		main(void)
**{
**	char		str[] = "Hello my peep";
**
**	if (strrchr(str, 'H') != ft_strrchr(str, 'H'))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (strrchr(str, 'm') != ft_strrchr(str, 'm'))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (strrchr(str, 'p') != ft_strrchr(str, 'p'))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (strrchr(str, 0) != ft_strrchr(str, 0))
**	{
**	write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
