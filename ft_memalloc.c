/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:52:56 by camurray          #+#    #+#             */
/*   Updated: 2019/06/05 10:57:36 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 	Recreation of the memalloc function.
** This function allocates a memory block fo specified length.
** This function must return null if it fails to allocate memory.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_memalloc.c
*/

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*new;
	size_t	i;

	new = NULL;
	new = (char *)malloc(size);
	if (new)
	{
		i = 0;
		while (size-- > 0)
		{
			new[i] = 0;
			i++;
		}
	}
	return (new);
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
**	return (1);
**}
*/
