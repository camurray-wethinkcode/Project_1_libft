/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 17:37:04 by camurray          #+#    #+#             */
/*   Updated: 2019/06/05 17:39:52 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation fo the strclr function.
** This function clears a string.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_strclr.c
*/

#include "libft.h"

void	ft_strclr(char *s)
{
	int i;

	i = 0;
	if (s != NULL)
		while (s[i])
			s[i++] = '\0';
}
/*
**int		main(void)
**{
**	int			i;
**	char		str[] = "Hello";
**
**	i = 0;
**	ft_strclr(NULL);
**	ft_strclr(str);
**	while (i < 6)
**	{
**		if (str[i] != '\0')
**		{
**			write(1, "It doesn't work\n", 16);
**			return (0);
**		}
**	i = i + 1;
**	}
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
