/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 16:03:58 by camurray          #+#    #+#             */
/*   Updated: 2019/06/05 16:10:07 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the memchr function.
** This function searches a memory block for a character.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_memchr.c
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	c1;
	int				i;

	i = 0;
	str = (unsigned char *)s;
	c1 = (unsigned char)c;
	while (n)
	{
		if (str[i] == c1)
			return (str + i);
		n--;
		i++;
	}
	return (0);
}
/*
**int		main(void)
**{
**	char			ctab[11];
**	int				itab[11];
**	unsigned long	ltab[11];
**	size_t			j;
**	int				i;
**
**	i = -300;
**	memchr(NULL, 0, 0);
**	ft_memchr(NULL, 0, 0);
**	while (i < 300)
**	{
**		j = 0;
**		while (j < 11)
**		{
**			ctab[j] = (char)rand();
**			itab[j] = rand();
**			ltab[j] = (unsigned long)rand() * 10000;
**			j++;
**		}
**		if (memchr(ctab, i, sizeof(ctab)) != ft_memchr(ctab, i, sizeof(ctab)))
**		{
**			write(1, "It doesn't work\n", 16);
**			return (0);
**		}
**		if (memchr(itab, i, sizeof(itab)) != ft_memchr(itab, i, sizeof(itab)))
**		{
**			write(1, "It doesn't work\n", 16);
**			return (0);
**		}
**		if (memchr(ltab, i, sizeof(ltab)) != ft_memchr(ltab, i, sizeof(ltab)))
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
