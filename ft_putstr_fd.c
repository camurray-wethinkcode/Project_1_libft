/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:55:06 by camurray          #+#    #+#             */
/*   Updated: 2019/06/06 11:56:01 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the putstr_fd function.
** The same as putstr except we output
** to a file descriptor instead of to the
** standard output.
*/

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if (s == 0)
		return ;
	write(fd, s, ft_strlen(s));
}
