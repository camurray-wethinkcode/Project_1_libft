/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 16:11:55 by camurray          #+#    #+#             */
/*   Updated: 2019/06/05 16:24:37 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the memcmp function.
** This function compares two memory blocks
** to see if they are identical or returns the difference
** between the two memory blocks.
** The number 10000 that is multiplied in the main
** is the number of bits in a long data type.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_memcmp.c
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *c1;
	const unsigned char *c2;

	c1 = (const unsigned char *)s1;
	c2 = (const unsigned char *)s2;
	if (s1 == s2)
		return (0);
	while (n > 0)
	{
		if (*c1 != *c2)
			return (*c1 - *c2);
		c1++;
		c2++;
		n--;
	}
	return (0);
}
/*
**int	main(void)
**{
**    char            ctab1[11], ctab2[11];
**    int             itab1[11], itab2[11];
**    unsigned long   ltab1[11], ltab2[11];
**    size_t          i, j;
**
**	if (memcmp(NULL, NULL, 0) != ft_memcmp(NULL, NULL, 0))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**    i = 0;
**    while (i < 11)
**    {
**        j = 0;
**        while (j < 11)
**        {
**            ctab1[j] = (char)rand();
**            ctab2[j] = (char)rand();
**			itab1[j] = rand();
**			itab2[j] = rand();
**            ltab1[j] = (unsigned long)rand() * 10000;
**			ltab2[j] = (unsigned long)rand() * 10000;
**            j++;
**        }
**		if (memcmp(ctab1, ctab2, sizeof(ctab1)) != ft
**_memcmp(ctab1, ctab2, sizeof(ctab1)))
**		{
**			write(1, "It doesn't work\n", 16);
**			return(0);
**		}
**        memcpy(ctab2, ctab1, sizeof(ctab1));
**		if (memcmp(ctab1, ctab2, sizeof(ctab1)) != ft
**_memcmp(ctab1, ctab2, sizeof(ctab1)))
**		{
**			write(1, "It doesn't work\n", 16);
**			return(0);
**		}
**		if (memcmp(itab1, itab2, sizeof(itab1)) != ft
**_memcmp(itab1, itab2, sizeof(itab1)))
**		{
**			write(1, "It doesn't work\n", 16);
**			return(0);
**		}
**		memcpy(itab2, itab1, sizeof(itab1));
**        if (memcmp(itab1, itab2, sizeof(itab1)) != ft
**_memcmp(itab1, itab2, sizeof(itab1)))
**		{
**			write(1, "It doesn't work\n", 16);
**			return(0);
**		}
**		if (memcmp(ltab1, ltab2, sizeof(ltab1)) != ft
**_memcmp(ltab1, ltab2, sizeof(ltab1)))
**		{
**			write(1, "It doesn't work\n", 16);
**			return(0);
**		}
**		memcpy(ltab2, ltab1, sizeof(ltab1));
**        if (memcmp(ltab1, ltab2, sizeof(ltab1)) != ft
**_memcmp(ltab1, ltab2, sizeof(ltab1)))
**		{
**			write(1, "It doesn't work\n", 16);
**			return(0);
**		}
**				++i;
**    }
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
