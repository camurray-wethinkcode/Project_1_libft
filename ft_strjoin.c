/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:23:15 by camurray          #+#    #+#             */
/*   Updated: 2019/06/06 10:28:10 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the strjoin function.
** This function joins multiple strings together
** without overwriting any string by creating
** a new null terminated memory block.
** If the memory allocation fails this
** function returns null.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_strjoin.c ft_strlen.c
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char	const *s2)
{
	char	*new;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (new == NULL)
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
}
/*
**int		main(void)
**{
**	char		*ret;
**
**	ft_strjoin(NULL, NULL);
**	ft_strjoin(NULL, "");
**	ft_strjoin("", NULL);
**	ret = ft_strjoin("Hello ", "boys");
**	if (strcmp(ret, "Hello boys") != 0)
**	{
**		write(1, "It doesn't work\n", 16);
**		free(ret);
**		return (0);
**	}
**	free(ret);
**	ret = ft_strjoin("", "boys");
**    if (strcmp(ret, "boys") != 0)
**    {
**		write(1, "It doesn't work\n", 16);
**        free(ret);
**        return (0);
**    }
**    free(ret);
**	ret = ft_strjoin("Hello ", "");
**    if (strcmp(ret, "Hello ") != 0)
**    {
**		write(1, "It doesn't work\n", 16);
**        free(ret);
**        return (0);
**    }
**    free(ret);
**	ret = ft_strjoin("", "");
**    if (strcmp(ret, "") != 0)
**    {
**		write(1, "It doesn't work\n", 16);
**        free(ret);
**        return (0);
**    }
**    free(ret);
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
