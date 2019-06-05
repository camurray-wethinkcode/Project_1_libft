/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:13:56 by camurray          #+#    #+#             */
/*   Updated: 2019/06/05 11:34:00 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the memcpy function.
** This function is similar to memmove, except it copies
** a memory block to a new string instead of permanently
** moving it, creating a duplicate and not altering
** the original memory block in any way.
** In the main, the function rand() is a random
** number generator used to generate input.
** The number used to limit the loop - 512
** is the number of bits in a char data type.
** The number 10000 that is multiplied in
** is the number of bits in a long data type.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_memcpy.c
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (n == 0 || dst == src)
		return (dst);
	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	while (n)
	{
		*str1 = *str2;
		str1++;
		str2++;
		n--;
	}
	return (dst);
}
/*
**int		main(void)
**{
**	char			ctab1[11], ctab2[11], ctab3[11];
**	int				itab1[11], itab2[11], itab3[11];
**	unsigned long	ltab1[11], ltab2[11], ltab3[11];
**	int				i, j;
**	size_t			k;
**	void			*tmp1, *tmp2, *tmp3;
**
**	memcpy(NULL, NULL, 0);
**	ft_memcpy(NULL, NULL, 0);
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
**			memcpy(ctab2, ctab1, (k < sizeof(ctab1)) ? k : sizeof(ctab1));
**			tmp1 = ft_memcpy(ctab3, ctab1, (k < sizeof(ctab1)) ? k : s
**izeof(ctab1));
**			memcpy(itab2, itab1, (k < sizeof(itab1)) ? k : sizeof(itab1));
**			tmp2 = ft_memcpy(itab3, itab1, (k < sizeof(itab1)) ? k : s
**izeof(itab1));
**			memcpy(ltab2, ltab1, (k < sizeof(ltab1)) ? k : sizeof(ltab1));
**			tmp3 = ft_memcpy(ltab3, ltab1, (k < sizeof(ltab1)) ? k : s
**izeof(ltab1));
**			if ((memcmp(itab2, itab3, sizeof(itab1)) != 0 || (tmp2 != itab3)))
**			{
**				write(1, "It doesn't work\n", 16);
**				return (0);
**			}
**			if (memcmp(ctab2, ctab3, sizeof(ctab1)) != 0 || tmp1 != ctab3)
**			{
**				write(1, "It doesn't work\n", 16);
**				return (0);
**			}
**			if (memcmp(ltab2, ltab3, sizeof(ltab1)) != 0 ||( tmp3 != ltab3))
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
