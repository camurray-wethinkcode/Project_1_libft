/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:30:22 by camurray          #+#    #+#             */
/*   Updated: 2019/06/04 17:36:03 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the lstdelone function.
** This function deletes a node on a list.
** to test: uncomment main
** gcc -Wall -Wextra -Werror ft_lstnew.c ft_memalloc.c
** ft_lstdelone.c ft_memdel.c ft_memcpy.c
*/

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	del((*alst)->content, (*alst)->content_size);
	ft_memdel((void **)alst);
}
/*
**void	freefunct(void *d, size_t s)
**{
**	free(d);
**	(void)s;
**}
**
**int		main(void)
**{
**	t_list	*begin;
**	size_t	v;
**
**	v = 1;
**	begin = ft_lstnew(&v, sizeof(void *));
**	begin->next = ft_lstnew(&v, sizeof(void *));
**	begin->next->next = ft_lstnew(&v, sizeof(void *));
**	ft_lstdelone(&begin->next->next, freefunct);
**	if (begin->next->next != NULL)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	ft_lstdelone(&begin->next, freefunct);
**	if (begin->next != NULL)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	ft_lstdelone(&begin, freefunct);
**	if (begin != NULL)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	write(1, "It works\n", 9);
**	return (1);
**}
*/
