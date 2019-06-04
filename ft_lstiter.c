/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:37:10 by camurray          #+#    #+#             */
/*   Updated: 2019/06/04 17:43:13 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the lstiter function.
** This function iterates through a list and applies
** a function to each item in the list.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror ft_memcpy.c
** ft_lstiter.c ft_lstnew.c ft_memalloc.c
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		(*f)(lst);
		lst = lst->next;
	}
}
/*
**void	iterfunct(t_list *v)
**{
**	*(size_t*)v->content = *(size_t*)v->content + 1;
**}
**
**int		main(void)
**{
**	t_list	*begin;
**	size_t	i;
**	size_t	j;
**
**	i = 1;
**	j = 2;
**	begin = ft_lstnew(&i, sizeof(size_t));
**	begin->next = ft_lstnew(&j, sizeof(size_t));
**	ft_lstiter(begin, iterfunct);
**	if (*(size_t*)begin->content != 2)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (*(size_t*)begin->next->content != 3)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	free(begin->next);
**	free(begin);
**	write(1, "It works\n", 9);
**	return (1);
**}
*/
