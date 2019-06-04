/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:21:28 by camurray          #+#    #+#             */
/*   Updated: 2019/06/04 15:44:58 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function is an extra function and is not part of the
** mandatory functions we need to recreate in the
** libft project at wethinkcode.
** This function swaps tha values of integer a & b without
** overwriting or losing either value.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_swap.c ft_putstr.c ft_putchar.c
*/

#include "libft.h"

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
**int		main(void)
**{
**	int	a;
**	int	b;
**	int	*pa;
**	int	*pb;
**
**	a = 6;
**	b = 60;
**	pa = &a;
**	pb = &b;
**	ft_putstr("\033[36mTest 1: input \"a is 6 & b is 60\"\n\033[0m");
**	ft_swap(&a, &b);
**	printf("a value is now: %d\nb value is now: %d\n", a, b);
**	a = 0;
**	b = 100;
**	ft_putstr("\033[36mTest 2: input \"a is 0 & b is 100\"\n\033[0m");
**	ft_swap(&a, &b);
**	printf("a value is now: %d\nb value is now: %d\n", a, b);
**	a = 33;
**	b = 20;
**	ft_putstr("\033[36mTest 3: input \"a is 33 & b is 20\"\n\033[0m");
**	ft_swap(&a, &b);
**	printf("a value is now: %d\nb value is now: %d\n", a, b);
**	a = 5;
**	b = 6000;
**	ft_putstr("\033[36mTest 4: input \"a is 5 & b is 6000\"\n\033[0m");
**	ft_swap(&a, &b);
**	printf("a value is now: %d\nb value is now: %d\n", a, b);
**	a = 999;
**	b = -1;
**	ft_putstr("\033[36mTest 5: input \"a is 999 & b is -1\"\n\033[0m");
**	ft_swap(&a, &b);
**	printf("a value is now: %d\nb value is now: %d\n", a, b);
**}
*/
