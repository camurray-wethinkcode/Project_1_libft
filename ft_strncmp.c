/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 17:19:56 by camurray          #+#    #+#             */
/*   Updated: 2019/06/05 17:24:22 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the strncmp function.
** Exactly like strcmp but to n characters.
** In the code: (!us1[i]) is null byte/end of string
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_strncmp.c
*/

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char *const	us1 = (const unsigned char *)s1;
	const unsigned char *const	us2 = (const unsigned char *)s2;
	size_t						i;

	i = (size_t)0;
	while (i < n)
	{
		if (us1[i] < us2[i])
			return (-1);
		else if (us1[i] > us2[i])
			return (1);
		else if (!us1[i])
			return (0);
		i++;
	}
	return (0);
}
/*
**int		main(void)
**{
**	write(1, "Numbers should match in both instances\n", 40);
**	printf("%d\n", strncmp("cba", "abc", 1));
**	printf("%d\n", ft_strncmp("cba", "abc", 1));
**	printf("%d\n", strncmp("abc", "abc", 3));
**	printf("%d\n", ft_strncmp("abc", "abc", 3));
**}
*/
