/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 16:56:29 by camurray          #+#    #+#             */
/*   Updated: 2019/06/04 17:18:50 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the lstadd function.
** This function adds a new node to a list.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_lstadd.c ft_lstnew.c ft_memalloc.c ft_memcpy.c
*/

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	new->next = (*alst);
	*alst = new;
}
/*
**int		main(void)
**{
**	t_list	*begin;
**	t_list	*add;
**	t_list	*tmp;
**	size_t	v;
**
**	v = 1;
**	begin = ft_lstnew(&v, sizeof(size_t));
**	tmp = begin;
**	add = ft_lstnew(&v, sizeof(size_t));
**	ft_lstadd(&begin, add);
**	if (begin != add)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (begin->next != tmp)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	free(begin->next);
**	free(begin);
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
