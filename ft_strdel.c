/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 17:40:43 by camurray          #+#    #+#             */
/*   Updated: 2019/06/05 17:43:46 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the strdel function.
** Deletes a string.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_strdel.c ft_strnew.c
*/

#include "libft.h"

void	ft_strdel(char **as)
{
	if (as != NULL)
	{
		free(*as);
		*as = NULL;
	}
}
/*
**int		main(void)
**{
**	char	*ret;
**
**	ft_strdel(NULL);
**	ret = ft_strnew(4);
**	ft_strdel(&ret);
**	if (ret != NULL)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	ret = ft_strnew(0);
**	ft_strdel(&ret);
**	if (ret != NULL)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
