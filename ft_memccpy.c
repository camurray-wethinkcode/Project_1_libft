/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:36:04 by camurray          #+#    #+#             */
/*   Updated: 2019/06/05 11:46:45 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the memccpy function.
** This function is an upgrade from memcpy
** where you can add an instruction to the input
** to stop copying at a specified character bit.
** In the main, the function rand() is a random
** number generator used to generate input.
** The number used to limit the loop - 512
** is the number of bits in a char data type.
** The number 10000 that is multiplied in
** is the number of bits in a long data type.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_memccpy.c
*/

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	while (n > 0)
	{
		if ((*str1++ = *str2++) == (unsigned char)c)
			return (str1);
		n--;
	}
	return (NULL);
}
/*
**int		main(void)
**{
**	char			ctab1[11], ctab2[11], ctab3[11];
**	int				itab1[11], itab2[11], itab3[11];
**	unsigned long	ltab1[11], ltab2[11], ltab3[11];
**	int				i, j;
**	size_t			k;
**	void			*tmp1, *tmp2;
**
**	memccpy(NULL, NULL, 0, 0);
**	ft_memccpy(NULL, NULL, 0, 0);
**	k = 0;
**	while (k <= sizeof(ltab1))
**	{
**		i = 0;
**		while (i < 512)
**		{
**			j = 0;
**			while (j < 11)
**			{
**				ctab1[j] = (char)rand();
**				ctab2[j] = 0; ctab3[j] = 0;
**				itab1[j] = rand();
**				itab2[j] = 0; itab3[j] = 0;
**				ltab1[j] = (unsigned long)rand() * 10000;
**				ltab2[j] = 0; ltab3[j] = 0;
**				j++;
**			}
**			tmp1 = memccpy(ctab2, ctab1, 'a', (k < sizeof(ctab1)) ? k : s
**izeof(ctab1));
**			memcpy(ctab3, ctab2, sizeof(ctab1));
**			memset(ctab2, 0, sizeof(ctab2));
**			tmp2 = ft_memccpy(ctab2, ctab1, 'a', (k < sizeof(ctab1)) ? k : s
**izeof(ctab1));
**			if ((memcmp(ctab2, ctab3, sizeof(ctab1)) != 0 || (tmp1 != tmp2)))
**			{
**				write(1, "It doesn't work\n", 16);
**				return (0);
**			}
**			tmp1 = memccpy(itab2, itab1, 'a', (k < sizeof(itab1)) ? k : s
**izeof(itab1));
**			memcpy(itab3, itab2, sizeof(itab1));
**			memset(itab2, 0, sizeof(itab2));
**			tmp2 = ft_memccpy(itab2, itab1, 'a', (k < sizeof(itab1)) ? k : s
**izeof(itab1));
**			if ((memcmp(itab2, itab3, sizeof(itab1)) != 0 || (tmp1 != tmp2)))
**			{
**				write(1, "It doesn't work\n", 16);
**				return (0);
**			}
**			tmp1 = memccpy(ltab2, ltab1, 'a', (k < sizeof(ltab1)) ? k : s
**izeof(ltab1));
**			memcpy(ltab3, ltab2, sizeof(ltab1));
**			memset(ltab2, 0, sizeof(ltab2));
**			tmp2 = ft_memccpy(ltab2, ltab1, 'a', (k < sizeof(ltab1)) ? k : s
**izeof(ltab1));
**			if ((memcmp(ltab2, ltab3, sizeof(ltab1)) != 0 || (tmp1 != tmp2)))
**			{
**				write(1, "It doesn't work\n", 16);
**				return (0);
**			}
**			++i;
**		}
**		++k;
**	}
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
