/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:11:13 by camurray          #+#    #+#             */
/*   Updated: 2019/06/04 15:35:22 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the isdigit function.
** Input is a single character that needs to be checked.
** Function returns nonzero if c is a numeric digit
** between '0' and '9' as on the ascii table.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_isdigit.c ft_putstr.c ft_strlen.c
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9' ? 1 : 0);
}
/*
**int	main(void)
**{
**	ft_putstr("\033[36mTest 1: input \"a\"\n\033[0m");
**	printf("%d\n", isdigit('a'));
**	printf("%d\n", ft_isdigit('a'));
**	ft_putstr("\033[36mTest 2: input \"0\"\n\033[0m");
**	printf("%d\n", isdigit('0'));
**	printf("%d\n", ft_isdigit('0'));
**	ft_putstr("\033[36mTest 3: input \"@\"\n\033[0m");
**	printf("%d\n", isdigit('@'));
**	printf("%d\n", ft_isdigit('@'));
**	ft_putstr("\033[36mTest 4: input \"6\"\n\033[0m");
**	printf("%d\n", isdigit('6'));
**	printf("%d\n", ft_isdigit('6'));
**	ft_putstr("\033[36mTest 5: input \"Q\"\n\033[0m");
**	printf("%d\n", isdigit('Q'));
**	printf("%d\n", ft_isdigit('Q'));
**	ft_putstr("\033[36mTest 6: input \" \"\n\033[0m");
**	printf("%d\n", isdigit(' '));
**	printf("%d\n", ft_isdigit(' '));
**	ft_putstr("\033[36mTest 7: input \",\"\n\033[0m");
**	printf("%d\n", isdigit(','));
**	printf("%d\n", ft_isdigit(','));
**	ft_putstr("\033[36mTest 8: input \"2\"\n\033[0m");
**	printf("%d\n", isdigit('2'));
**	printf("%d\n", ft_isdigit('2'));
**	ft_putstr("\033[36mTest 9: input \"%\"\n\033[0m");
**	printf("%d\n", isdigit('%'));
**	printf("%d\n", ft_isdigit('%'));
**	ft_putstr("\033[36mTest 10: input \"[\"\n\033[0m");
**	printf("%d\n", isdigit('['));
**	printf("%d\n", ft_isdigit('['));
**}
*/
