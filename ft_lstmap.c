/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:45:06 by camurray          #+#    #+#             */
/*   Updated: 2019/06/04 17:56:32 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the lstmap function.
** This function does the same as ft_lstiter but returns a new
** list instead of altering the existing one.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror ft_lstmap.c ft_memcpy.c
** ft_lstnew.c ft_strdup.c ft_strlen.c ft_memalloc.c
*/

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new;
	t_list		*list;

	if (!lst)
		return (NULL);
	list = f(lst);
	new = list;
	while (lst->next)
	{
		lst = lst->next;
		if (!(list->next = f(lst)))
		{
			free(list->next);
			return (NULL);
		}
		list = list->next;
	}
	return (new);
}
/*
**t_list		*iterfunct(t_list *elem)
**{
**	t_list	*new;
**	char	*content;
**	size_t	i;
**
**	content = ft_strdup((char *)(elem->content));
**	i = 0;
**	while (i < ft_strlen(content))
**	{
**		content[i] += 1;
**		++i;
**	}
**	new = ft_lstnew((void const *) content, 5);
**	free(content);
**	return (new);
**}
**
**int			main(void)
**{
**	t_list			*lst_initial;
**	t_list			*lst;
**	char			*content;
**	t_list			*(*f)(t_list *);
**
**	content = "toto";
**	lst_initial = ft_lstnew((void const *) content, 5);
**	content = "tata";
**	lst_initial->next = ft_lstnew((void const *) content, 5);
**	content = "tutu";
**	lst_initial->next->next = ft_lstnew((void const *) content, 5);
**	f = &iterfunct;
**	lst = ft_lstmap(lst_initial, f);
**	if (!strcmp((const char *) lst->content, (const char *) lst_in
**itial->content) || strcmp((const char *) lst->content, "upup"))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (!strcmp((const char *) lst->next->content, (const ch
**ar *) lst_initial->next->content) || strcmp((const char *
**) lst->next->content, "ubub"))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (!strcmp((const char *) lst->next->next->content, (con
**st char *) lst_initial->next->next->content) || strcmp((con
**st char *) lst->next->next->content, "uvuv"))
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
