/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 15:07:54 by camurray          #+#    #+#             */
/*   Updated: 2019/05/28 12:11:38 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** finds the length of an integer
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_intlen.c ft_putstr.c ft_putchar.c
*/

#include "libft.h"

int	ft_intlen(int n)
{
	int	len;

	len = 1;
	if (n < 0)
		len++;
	while (n /= 10)
		len++;
	return (len);
}
/*
** int	main(void)
**{
**	ft_putstr("\033[36mTest 1: input \"1\"\n\033[0m");
**	ft_putstr("\033[35mAnswer should be 1\n\033[0m");
**	printf("%d\n", ft_intlen(1));
**	ft_putstr("\033[36mTest 2: input \"11\"\n\033[0m");
**	ft_putstr("\033[35mAnswer should be 2\n\033[0m");
**	printf("%d\n", ft_intlen(11));
**	ft_putstr("\033[36mTest 3: input \"111\"\n\033[0m");
**	ft_putstr("\033[35mAnswer should be 3\n\033[0m");
**	printf("%d\n", ft_intlen(111));
**	ft_putstr("\033[36mTest 4: input \"1111\"\n\033[0m");
**	ft_putstr("\033[35mAnswer should be 4\n\033[0m");
**	printf("%d\n", ft_intlen(1111));
**	ft_putstr("\033[36mTest 5: input \"11111\"\n\033[0m");
**	ft_putstr("\033[35mAnswer should be 5\n\033[0m");
**	printf("%d\n", ft_intlen(11111));
**	ft_putstr("\033[36mTest 6: input \"1111111111\"\n\033[0m");
**	ft_putstr("\033[35mAnswer should be 10\n\033[0m");
**	printf("%d\n", ft_intlen(1111111111));
**}
*/
