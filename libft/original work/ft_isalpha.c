/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:10:43 by camurray          #+#    #+#             */
/*   Updated: 2019/05/28 12:25:23 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** returns nonzero if c is alphabetic only
** to test: uncomment main
** run gcc -Wall -Wextra -Werror ft_islower.c ft_isupper.c
** ft_isalpha.c ft_putstr.c ft_putchar.c
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
/*
**int	main(void)
**{
**	ft_putstr("\033[36mTest 1: input \"a\"\n\033[0m");
**	printf("%d\n", isalpha('a'));
**	printf("%d\n", ft_isalpha('a'));
**	ft_putstr("\033[36mTest 2: input \"A\"\n\033[0m");
**	printf("%d\n", isalpha('A'));
**	printf("%d\n", ft_isalpha('A'));
**	ft_putstr("\033[36mTest 3: input \"0\"\n\033[0m");
**	printf("%d\n", isalpha('0'));
**	printf("%d\n", ft_isalpha('0'));
**	ft_putstr("\033[36mTest 4: input \"~\"\n\033[0m");
**	printf("%d\n", isalpha('~'));
**	printf("%d\n", ft_isalpha('~'));
**	ft_putstr("\033[36mTest 5: input \"z\"\n\033[0m");
**	printf("%d\n", isalpha('z'));
**	printf("%d\n", ft_isalpha('z'));
**	ft_putstr("\033[36mTest 6: input \"Z\"\n\033[0m");
**	printf("%d\n", isalpha('Z'));
**	printf("%d\n", ft_isalpha('Z'));
**	ft_putstr("\033[36mTest 7: input \" \"\n\033[0m");
**	printf("%d\n", isalpha(' '));
**	printf("%d\n", ft_isalpha(' '));
**	ft_putstr("\033[36mTest 8: input \"#\"\n\033[0m");
**	printf("%d\n", isalpha('#'));
**	printf("%d\n", ft_isalpha('#'));
**	ft_putstr("\033[36mTest 9: input \"[\"\n\033[0m");
**	printf("%d\n", isalpha('['));
**	printf("%d\n", ft_isalpha('['));
**	ft_putstr("\033[36mTest 10: input \".\"\n\033[0m");
**	printf("%d\n", isalpha('.'));
**	printf("%d\n", ft_isalpha('.'));
**}
*/
