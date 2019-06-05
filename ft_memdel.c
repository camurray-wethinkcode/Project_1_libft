/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:05:09 by camurray          #+#    #+#             */
/*   Updated: 2019/06/05 11:11:22 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the memdel function.
** This function frees a memory block.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_memdel.c
*/

#include "libft.h"

void	ft_memdel(void **ap)
{
	if (!ap || !*ap)
		return ;
	else
	{
		free(*ap);
		*ap = NULL;
	}
}
/*
**int		main(void)
**{
**	void		*ret;
**
**	ret = ft_memalloc(4);
**	ft_memdel(&ret);
**	if (ret != NULL)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
