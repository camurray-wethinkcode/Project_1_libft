/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_and_replace.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 15:46:21 by camurray          #+#    #+#             */
/*   Updated: 2019/06/04 16:04:04 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This is an extra function and is not part of the
** mandatory functions we need to recreate in the
** libft project at wethinkcode.
** This function searched for a given character (second input value)
** in a given string (first input value) and replaces each
** instance of the character with a different given character
** (third input value) and returns a pointer to the modified string.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_search_and_replace.c ft_strlen.c ft_putstr.c
*/

#include "libft.h"

char	ft_search_and_replace(char *str, char a, char b)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == a)
			str[i] = b;
		i++;
	}
	return (*str);
}
/*
**int		main(void)
**{
**	char	test1[500] = "Hello";
**	char	test2[500] = " ";
**	char	test3[500] = "Hello";
**	char	test4[500] = "Hello";
**	char	test5[500] = "Hello";
**	char	test6[500] = "Hello";
**	char	test7[500] = "Hello";
**	char	test8[500] = "Hello";
**	char	test9[500] = "Hello";
**	char	test10[500] = "Hello";
**
**	ft_putstr("\033[36mTest 1: input \"Hello\" repla
**cing \"e\" with \"3\"\n\033[0m");
**	ft_search_and_replace(test1, 'e', '3');
**	printf("%s\n", test1);
**	ft_putstr("\033[36mTest 2: input \" \" repla
**cing \" \" with \"B\"\n\033[0m");
**	ft_search_and_replace(test2, ' ', 'B');
**	printf("%s\n", test2);
**	ft_putstr("\033[36mTest 3: input \"Hello\" repla
**cing \"l\" with \" \"\n\033[0m");
**	ft_search_and_replace(test3, 'l', ' ');
**	printf("%s\n", test3);
**	ft_putstr("\033[36mTest 4: input \"Hello\" repla
**cing \"l\" with \"!\"\n\033[0m");
**	ft_search_and_replace(test4, 'l', '!');
**	printf("%s\n", test4);
**	ft_putstr("\033[36mTest 5: input \"Hello\" repla
**cing \"o\" with \"0\"\n\033[0m");
**	ft_search_and_replace(test5, 'o', '0');
**	printf("%s\n", test5);
**	ft_putstr("\033[36mTest 6: input \"Hello\" repla
**cing \"l\" with \"7\"\n\033[0m");
**	ft_search_and_replace(test6, 'l', '7');
**	printf("%s\n", test6);
**	ft_putstr("\033[36mTest 7: input \"Hello\" repla
**cing \"H\" with \"h\"\n\033[0m");
**	ft_search_and_replace(test7, 'H', 'h');
**	printf("%s\n", test7);
**	ft_putstr("\033[36mTest 8: input \"Hello\" repla
**cing \"o\" with \" \"\n\033[0m");
**	ft_search_and_replace(test8, 'o', ' ');
**	printf("%s\n", test8);
**	ft_putstr("\033[36mTest 9: input \"Hello\" repla
**cing \"e\" with \"@\"\n\033[0m");
**	ft_search_and_replace(test9, 'e', '@');
**	printf("%s\n", test9);
**	ft_putstr("\033[36mTest 10: input \"Hello\" repla
**cing \"7\" with \"3\"\n\033[0m");
**	ft_search_and_replace(test10, '7', '3');
**	printf("%s\n", test10);
**}
*/
