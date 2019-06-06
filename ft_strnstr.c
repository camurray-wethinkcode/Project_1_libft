/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:24:59 by camurray          #+#    #+#             */
/*   Updated: 2019/06/06 11:31:29 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the strnstr function.
** This function is the smae as strstr but
** has an added index.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_strnstr.c
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int i;
	unsigned int j;

	if (!*needle)
		return ((char*)haystack);
	i = 0;
	while (haystack[i] != '\0' && (size_t)i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while (needle[j] != '\0' && haystack[i + j] == needle[j] &&
					(size_t)(i + j) < len)
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
**
**	if (strnstr(str, "Hello", 6) != ft_strnstr(str, "Hello", 6))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (strnstr(str, "Hello", 3) != ft_strnstr(str, "Hello", 3))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (strnstr(str, "you", 1) != ft_strnstr(str, "you", 1))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (strnstr(str, "pee", 2) != ft_strnstr(str, "pee", 2))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (strnstr(str, "p", 0) != ft_strnstr(str, "p", 0))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (strnstr(str, "", 3) != ft_strnstr(str, "", 3))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
