/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:32:10 by camurray          #+#    #+#             */
/*   Updated: 2019/06/06 11:37:47 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the strstr function.
** This function finds a string within a string.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_strstr.c
*/

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int i;
	unsigned int j;

	if (!*needle)
		return ((char*)haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while (needle[j] != '\0' && haystack[i + j] == needle[j])
				++j;
			if (needle[j] == '\0')
				return ((char*)&haystack[i]);
		}
		++i;
	}
	return (0);
}
/*
**int		main(void)
**{
**	char		*str = "Hello you peep";
**
**	if (strstr(str, "Hello") != ft_strstr(str, "Hello"))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (strstr(str, "you") != ft_strstr(str, "you"))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (strstr(str, "pee") != ft_strstr(str, "pee"))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (strstr(str, "p") != ft_strstr(str, "p"))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (strstr(str, "") != ft_strstr(str, ""))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (strstr("", "") != ft_strstr("", ""))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
