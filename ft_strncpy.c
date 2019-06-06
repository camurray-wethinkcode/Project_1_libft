/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:08:36 by camurray          #+#    #+#             */
/*   Updated: 2019/06/06 11:14:27 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the strncpy function.
** The same as strcpy but has an added index.
** In the main, the number 512
** is the length of bits in a char data type.
** The rand() function is a random number generator
** and provides input.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_strncpy.c
*/

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int	i;

	i = 0;
	while (len > i && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
/*
**int		main(void)
**{
**	char		ctab[11], ctab2[21], ctab3[21];
**	int			i, j;
**	size_t		k;
**
**	k = 0;
**	while (k < 21)
**	{
**		i = 0;
**		while (i < 512)
**		{
**			j = 0;
**			while (j < 21)
**			{
**				if (j < 11)
**					ctab[j] = ((char)rand() % 26) + 'a';
**				ctab2[j] = 'Z';
**				ctab3[j] = 'Z';
**				j++;
**			}
**			ctab[10] = 0;
**			ctab2[20] = 0;
**			ctab3[20] = 0;
**			if (strncpy(ctab2, ctab, k) != ctab2 || ft_
**strncpy(ctab3, ctab, k) != ctab3)
**			{
**				write(1, "It doesn't work\n", 16);
**				return(0);
**			}
**			if (strcmp(ctab2, ctab3))
**			{
**				write(1, "It doesn't work\n", 16);
**				return(0);
**			}
**			++i;
**		}
**		k++;
**	}
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
