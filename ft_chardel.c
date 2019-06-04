/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chardel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:14:43 by camurray          #+#    #+#             */
/*   Updated: 2019/06/04 14:30:47 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This is an extra function and is not part of the
** mandatory functions we need to recreate in the
** libft project at wethinkcode.
** This function deletes ascii alphabet characters.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_chardel.c ft_strlen.c ft_putstr.c
*/
#include "libft.h"

char	ft_chardel(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		c = '\0';
		return (c);
	}
	else
		return (0);
}
/*
**int		main(void)
**{
**	ft_putstr("\033[35mThe function should print an empty line
**on the standard output as the character has been deleted\n\033[0m");
**	ft_putstr("\033[36mTest 1: input \"a\"\n\033[0m");
**	printf("%c\n", ft_chardel('a'));
**	ft_putstr("\033[36mTest 2: input \"A\"\n\033[0m");
**	printf("%c\n", ft_chardel('A'));
**	ft_putstr("\033[36mTest 3: input \"t\"\n\033[0m");
**	printf("%c\n", ft_chardel('t'));
**	ft_putstr("\033[36mTest 4: input \"T\"\n\033[0m");
**	printf("%c\n", ft_chardel('T'));
**	ft_putstr("\033[36mTest 5: input \"z\"\n\033[0m");
**	printf("%c\n", ft_chardel('z'));
**	ft_putstr("\033[36mTest 6: input \"Z\"\n\033[0m");
**	printf("%c\n", ft_chardel('Z'));
**	ft_putstr("\033[36mTest 7: input \"q\"\n\033[0m");
**	printf("%c\n", ft_chardel('q'));
**	ft_putstr("\033[36mTest 8: input \"Q\"\n\033[0m");
**	printf("%c\n", ft_chardel('Q'));
**	ft_putstr("\033[36mTest 9: input \"i\"\n\033[0m");
**	printf("%c\n", ft_chardel('i'));
**	ft_putstr("\033[36mTest 10: input \"I\"\n\033[0m");
**	printf("%c\n", ft_chardel('I'));
**}
*/
