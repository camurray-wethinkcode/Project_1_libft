/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:23:05 by camurray          #+#    #+#             */
/*   Updated: 2019/06/06 09:31:37 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the strtrim function.
** This function trims whitespaces from the start
** and end of the given string (' ', \n, \t).
** to test: uncomment main
** run gcc -Wall -Wextra -Werror ft_strnew.c
** ft_strtrim.c ft_strlen.c ft_strsub.c
*/

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char const	*new;

	if (s == NULL)
		return (NULL);
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	if (*s == '\0')
		return (ft_strnew(0));
	new = s + ft_strlen(s) - 1;
	while (*new == ' ' || *new == '\t' || *new == '\n')
		new--;
	return (ft_strsub(s, 0, new - s + 1));
}
/*
**int		main(void)
**{
**	char			str1[] = "  \t    \t\nBon\t \njour\t\n  \n     ";
**	char			str2[] = "Bonjour";
**	char			str3[] = "  \t\t\t   ";
**	char			*r;
**
**	ft_strtrim(NULL);
**	r = ft_strtrim(str1);
**	if (strcmp(r, "Bon\t \njour"))
**	{
**		write(1, "It doesn't work\n", 16);
**		free(r);
**		return (0);
**	}
**	free(r);
**	r = ft_strtrim(str2);
**    if (strcmp(r, "Bonjour") || (str2 == r))
**    {
**        write(1, "It doesn't work\n", 16);
**		free(r);
**        return (0);
**    }
**    free(r);
**	r = ft_strtrim(str3);
**    if (strcmp(r, "") || (str3 == r))
**    {
**        write(1, "It doesn't work\n", 16);
**		free(r);
**       return (0);
**    }
**    free(r);
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
