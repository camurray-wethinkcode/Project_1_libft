/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:07:31 by camurray          #+#    #+#             */
/*   Updated: 2019/06/04 15:17:21 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This is an extra function and is not part of the
** mandatory functions we need to recreate in the
** libft project at wethinkcode.
** This function counts the number of words in a sentence
** and takes 2 inputs, a pointer to the string
** and what character the words are delimited by.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_countwords.c ft_strlen.c ft_putstr.c
*/

#include "libft.h"

int	ft_countwords(const char *s, char c)
{
	unsigned int	i;
	int				res;

	i = 0;
	res = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			res++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (res);
}
/*
**int	main(void)
**{
**	char	test1[500] = "Hi!";
**	char	test2[500] = "Hi there.";
**	char	test3[500] = "How are you?";
**	char	test4[500] = "How is libft going?";
**	char	test5[500] = "Are you progressing at all?";
**	char	test6[500] = "Can I offer you some help?";
**	char	test7[500] = "Which function are you strugg
**ling to understand?";
**	char	test8[500] = "Maybe you should be working wit
**h your team on this project?";
**	char	test9[500] = "You know, you're learning some rea
**lly valuable skills right now.";
**	char	test10[500] = "The more you learn now, the easi
**er your job will be one day.";
**	ft_putstr("\033[36mTest 1: input \"Hi!\"\n\033[0m");
**	printf("%d\n", ft_countwords(test1, ' '));
**	ft_putstr("\033[36mTest 2: input \"Hi there.\"\n\033[0m");
**	printf("%d\n", ft_countwords(test2, ' '));
**	ft_putstr("\033[36mTest 3: input \"How are you?\"\n\033[0m");
**	printf("%d\n", ft_countwords(test3, ' '));
**	ft_putstr("\033[36mTest 4: input \"How is libft going?\"\n\033[0m");
**	printf("%d\n", ft_countwords(test4, ' '));
**	ft_putstr("\033[36mTest 5: input \"Are you progressing at all?\"\n\033[0m");
**	printf("%d\n", ft_countwords(test5, ' '));
**	ft_putstr("\033[36mTest 6: input \"Can I offer you some help?\"\n\033[0m");
**	printf("%d\n", ft_countwords(test6, ' '));
**	ft_putstr("\033[36mTest 7: input \"Which function are you strugg
**ling to understand?\"\n\033[0m");
**	printf("%d\n", ft_countwords(test7, ' '));
**	ft_putstr("\033[36mTest 8: input \"Maybe you should be working with your te
**am on this project?\"\n\033[0m");
**	printf("%d\n", ft_countwords(test8, ' '));
**	ft_putstr("\033[36mTest 9: input \"You know, you're learning some rea
**lly valuable skills right now.\"\n\033[0m");
**	printf("%d\n", ft_countwords(test9, ' '));
**	ft_putstr("\033[36mTest 10: input \"The more you learn now, the easi
**er your job will be one day.\"\n\033[0m");
**	printf("%d\n", ft_countwords(test10, ' '));
**}
*/
