/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:56:26 by camurray          #+#    #+#             */
/*   Updated: 2019/06/06 10:01:44 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the strdup function.
** This function duplicates a string with a new
** memory block and does not overwrite anything.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_strdup.c
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == 0)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
**int		main(void)
**{
**	char		*ret1;
**	char		*ret2;
**
**	ret1 = strdup("");
**	ret2 = ft_strdup("");
**	if (strcmp(ret1, ret2) != 0)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	free(ret1);
**	free(ret2);
**	ret1 = strdup("hello");
**	ret2 = ft_strdup("hello");
**	if (strcmp(ret1, ret2) != 0)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	free(ret1);
**	free(ret2);
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
