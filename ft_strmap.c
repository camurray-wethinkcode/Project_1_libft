/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:45:39 by camurray          #+#    #+#             */
/*   Updated: 2019/06/06 10:53:57 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the strmap function.
** This function is similar to striter
** except it doesn't modify the original
** string but allocates a memory block
** to store a new null terminated string.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_strmap.c ft_strlen.c ft_strnew.c
*/

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	new = ft_strnew(ft_strlen(s));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new[i] = (*f)(s[i]);
		i++;
	}
	return (new);
}
/*
**char	iteration(char s)
**{
**	return (s + 1);
**}
**
**int		main(void)
**{
**	char		str[] = "Hello";
**	char		*ret;
**
**	ft_strmap(NULL, NULL);
**	ft_strmap("", NULL);
**	ret = ft_strmap(str, iteration);
**	if (strcmp(ret, "Ifmmp") != 0)
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
