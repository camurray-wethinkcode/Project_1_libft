/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:01:31 by camurray          #+#    #+#             */
/*   Updated: 2019/06/06 11:07:52 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the strncat function.
** This function concatenates two strings.
** It is advisable to rather use strlcat as
** it is less error prone as with strncat
** the string must have the exact size
** already allocated.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_strncat.c
*/

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j] && j < n)
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}
/*
**int		main(void)
**{
**	char		dst1[50] = {0};
**	char		dst2[50] = {0};
**
**	if (strncat(dst1, "hello ", 2) != ft_strncat(dst1, "hello ", 2))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	memset(dst1, 0, sizeof(dst1));
**	strncat(dst1, "Hello ", 4);
**	ft_strncat(dst2, "Hello ", 4);
**	if (strcmp(dst1, dst2) != 0)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	strncat(dst1, "Hello ", 2);
**	ft_strncat(dst2, "Hello ", 2);
**	if (strcmp(dst1, dst2) != 0)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	strncat(dst1, "Hello ", 10);
**    ft_strncat(dst2, "Hello ", 10);
**    if (strcmp(dst1, dst2) != 0)
**    {
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	strncat(dst1, "1234\n78", 7);
**   	ft_strncat(dst2, "1234\n78", 7);
**   	if (strcmp(dst1, dst2) != 0)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
