/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:10:34 by camurray          #+#    #+#             */
/*   Updated: 2019/06/04 15:26:44 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the isalnum function.
** Input is a single character that need to be checked.
** To check if it is an alpha numeric character, so
** either a number or alphabetic character.
** Called functions isalpha and isdigit from library
** to do all the work for us with checking.
** Function returns nonzero if c is alphanumeric.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror ft_isalpha.c ft_isdigit.c
** ft_isalnum.c ft_strlen.c ft_putstr.c ft_islower.c ft_isupper.c
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
**int	main(void)
**{
**	ft_putstr("\033[36mTest 1: input \"a\"\n\033[0m");
**	printf("%d\n", isalnum('a'));
**	printf("%d\n", ft_isalnum('a'));
**	ft_putstr("\033[36mTest 2: input \"A\"\n\033[0m");
**	printf("%d\n", isalnum('A'));
**	printf("%d\n", ft_isalnum('A'));
**	ft_putstr("\033[36mTest 3: input \"0\"\n\033[0m");
**	printf("%d\n", isalnum('0'));
**	printf("%d\n", ft_isalnum('0'));
**	ft_putstr("\033[36mTest 4: input \"~\"\n\033[0m");
**	printf("%d\n", isalnum('~'));
**	printf("%d\n", ft_isalnum('~'));
**	ft_putstr("\033[36mTest 5: input \"z\"\n\033[0m");
**	printf("%d\n", isalnum('z'));
**	printf("%d\n", ft_isalnum('z'));
**	ft_putstr("\033[36mTest 6: input \"Z\"\n\033[0m");
**	printf("%d\n", isalnum('Z'));
**	printf("%d\n", ft_isalnum('Z'));
**	ft_putstr("\033[36mTest 7: input \" \"\n\033[0m");
**	printf("%d\n", isalnum(' '));
**	printf("%d\n", ft_isalnum(' '));
**	ft_putstr("\033[36mTest 8: input \"#\"\n\033[0m");
**	printf("%d\n", isalnum('#'));
**	printf("%d\n", ft_isalnum('#'));
**	ft_putstr("\033[36mTest 9: input \"[\"\n\033[0m");
**	printf("%d\n", isalnum('['));
**	printf("%d\n", ft_isalnum('['));
**	ft_putstr("\033[36mTest 10: input \".\"\n\033[0m");
**	printf("%d\n", isalnum('.'));
**	printf("%d\n", ft_isalnum('.'));
**}
*/
