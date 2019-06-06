/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:39:40 by camurray          #+#    #+#             */
/*   Updated: 2019/06/06 11:43:23 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the strsub function.
** This function cuts a string out of a string
** and returns it in a newly allocated memory block.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_strsub.c
*/

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	new = (char *)malloc(sizeof(char) * len + 1);
	if (new == NULL)
		return (NULL);
	while (i < len)
	{
		new[i] = s[i + start];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
**int		main(void)
**{
**	char		*ret;
**	char		str[] = "*Hello*";
**
**	ft_strsub(NULL, 0, 0);
**	ft_strsub(NULL, 1, 0);
**	ft_strsub(NULL, 1, 1);
**	ft_strsub(NULL, 0, 1);
**	ret = ft_strsub(str, 1, 5);
**	if (strcmp(ret, "Hello") != 0)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	ret = ft_strsub(str, 3, 1);
**    if (strcmp(ret, "l") != 0)
**    {
**		write(1, "It doesn't work\n", 16);
**        return (0);
**    }
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
