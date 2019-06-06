/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:29:13 by camurray          #+#    #+#             */
/*   Updated: 2019/06/06 10:37:58 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the strlcat function.
** This function is a better alternative than strncat
** as it concatenates input in a less error prone manner.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_strlcat.c ft_strlen.c ft_memset.c
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (dst[len] && len < dstsize)
		len++;
	i = len;
	while (src[len - i] && len + 1 < dstsize)
	{
		dst[len] = src[len - i];
		len++;
	}
	if (i < dstsize)
		dst[len] = '\0';
	return (i + ft_strlen(src));
}
/*
**int		main(void)
**{
**	char		dst1[50] = {0};
**	char		dst2[50] = {0};
**	size_t		i;
**	size_t		j;
**	size_t		k;
**
**	if (strlcat(dst1, "Hello ", 4) != ft_strlcat(dst2, "Hello ", 4))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	ft_memset(dst1, 0, sizeof(dst1));
**	ft_memset(dst2, 0, sizeof(dst1));
**	j = strlcat(dst1, "Hello ", 4);
**	k = ft_strlcat(dst2, "Hello ", 4);
**	if (strcmp(dst1, dst2) != 0 || j != k)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	j = strlcat(dst1, "Hello ", 1);
**	k = ft_strlcat(dst2, "Hello ", 1);
**	if (strcmp(dst1, dst2) != 0 || j != k)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	i = 0;
**	while (i < 6)
**	{
**		dst1[4 + i] = 'z';
**		dst2[4 + i] = 'z';
**		++i;
**	}
**	j = strlcat(dst1, "abc", 6);
**	k = ft_strlcat(dst2, "abc", 6);
**	if (strcmp(dst1, dst2) != 0 || j != k)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
