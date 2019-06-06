/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:20:48 by camurray          #+#    #+#             */
/*   Updated: 2019/06/06 11:24:13 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the strnew function.
** This function creates a new null terminated string.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_strnew.c
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*f;
	int		j;
	int		l;

	l = size + 1;
	j = 0;
	f = (char *)malloc(l);
	if (f == 0)
		return (NULL);
	while (l > 0)
	{
		f[j] = '\0';
		l--;
		j++;
	}
	return (f);
}
/*
**int		main(void)
**{
**	char		*ret;
**	int			i;
**
**	i = 0;
**	ret = ft_strnew(4);
**	if (ret != NULL)
**	{
**		while (i < 5)
**		{
**			if (ret[i] != '\0')
**			{
**				write(1,"It doesn't work\n", 16);
**				return (0);
**			}
**			i = i + 1;
**		}
**	}
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
