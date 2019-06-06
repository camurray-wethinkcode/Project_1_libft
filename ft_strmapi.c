/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:55:55 by camurray          #+#    #+#             */
/*   Updated: 2019/06/06 10:59:42 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the strmapi function.
** This function is the same as strmap
** but has an added index.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_strmapi.c ft_strlen.c ft_strnew.c
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new;

	if (s == NULL || f == NULL)
		return (NULL);
	new = ft_strnew(ft_strlen(s));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new[i] = (*f)(i, s[i]);
		i++;
	}
	return (new);
}
/*
**char	iteration(unsigned int i, char s)
**{
**	return (s + i);
**}
**
**int		main(void)
**{
**	char		str[] = "Hello";
**	char		empty[] = "";
**	char		*ret;
**
**	ft_strmapi(NULL, NULL);
**	ft_strmapi(empty, NULL);
**	ret = ft_strmapi(str, iteration);
**	if (strcmp(ret, "Hfnos") != 0)
**	{
**		write(1, "It doesn't work\n", 16);
**		free(ret);
**		return (0);
**	}
**	free(ret);
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
