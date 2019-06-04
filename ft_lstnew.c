/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:57:58 by camurray          #+#    #+#             */
/*   Updated: 2019/06/04 18:07:42 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the lstnew function.
** This function allocates a memory slot with malloc and
** returns a new link.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_lstnew.c ft_memalloc.c ft_memcpy.c
*/

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	if (content == NULL || content_size == 0)
	{
		new->content = NULL;
		new->content_size = 0;
		new->next = NULL;
	}
	else
	{
		new->content = ft_memalloc(content_size);
		new->content = ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
		new->next = NULL;
	}
	return (new);
}
/*
**int		main(void)
**{
**	t_list	*begin;
**	size_t	i;
**
**	i = 1;
**	begin = ft_lstnew(NULL, 36);
**	if (begin != 0 && (begin->content_size != 0 || begin->content != NULL))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	free(begin);
**	begin = ft_lstnew(&i, sizeof(size_t));
**	if (begin != NULL)
**	{
**		if (&i == begin->content)
**		{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**		}
**		if (*(size_t*)begin->content != 1)
**		{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**		}
**		if (begin->content_size != sizeof(size_t))
**		{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**		}
**		if (begin->next != 0)
**		{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**		}
**	}
**	free(begin);
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
