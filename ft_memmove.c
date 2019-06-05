/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 16:25:51 by camurray          #+#    #+#             */
/*   Updated: 2019/06/05 16:37:10 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the memmove function.
** This function moves a memory block (copies and
** overwrites the original).
** In the main, the function rand() is a random
** number generator used to generate input.
** The number used to limit the loop - 512
** is the number of bits in a char data type.
** to test: uncomment main
** run gcc -Wall -wextra -Werror
** ft_memmove.c ft_memcpy.c
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *pd;
	char *ps;

	if (dst == src)
		return (dst);
	pd = (char *)dst;
	ps = (char *)src;
	if (src <= dst)
	{
		ps += len - 1;
		pd += len - 1;
		while (len--)
			*pd-- = *ps--;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
/*
**int		main(void)
**{
**	char		str1[] = "memmove can be very useful......";
**	char		str2[] = "memmove can be very useful......";
**	char		str3[] = "memmove can be very useful......";
**	char		str4[] = "memmove can be very useful......";
**
**	char		s1[101], t1[101];
**	char		s2[101], t2[101];
**	size_t		i, j;
**
**	i = 0;
**	while (i < 512)
**	{
**		j = 0;
**		while (j < 100)
**		{
**			s1[j] = (char)rand();
**			s2[j] = (char)rand();
**			j++;
**		}
**		s1[100] = 0;    s2[100] = 0;
**		memcpy(t1, s1, sizeof(s1));
**		memcpy(t2, s2, sizeof(s2));
**		if (strcmp(memmove(str1 + 10, str1 + 5, 10), ft
**_memmove(str2 + 10, str2 + 5, 10)) != 0)
**		{
**			write(1, "It doesn't work\n", 16);
**			return (0);
**		}
**		if (strcmp(memmove(str3 + 5, str3 + 10, 10), ft
**_memmove(str4 + 5, str4 + 10, 10)) != 0)
**		{
**			write(1, "It doesn't work\n", 16);
**			return (0);
**		}
**		if (strcmp(memmove(s1, s2, 2), ft_memmove(t1, t2, 2)) != 0)
**		{
**			write(1, "It doesn't work\n", 16);
**			return (0);
**		}
**		if (strcmp(memmove(s1, s1 + 25, 30), ft_memmove(t1, t1 + 25, 30)) != 0)
**		{
**			write(1, "It doesn't work\n", 16);
**			return (0);
**		}
**		if (strcmp(memmove(s1 + 30, s1, 40), ft_memmove(t1 + 30, t1, 40)) != 0)
**		{
**			write(1, "It doesn't work\n", 16);
**			return (0);
**		}
**		++i;
**	}
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
