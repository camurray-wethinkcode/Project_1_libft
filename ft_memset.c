/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:14:50 by camurray          #+#    #+#             */
/*   Updated: 2019/05/28 12:14:25 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** replaces each of the first len characters of b with c
** returns b
** to test: uncomment main
** run gcc -Wall -Wextra -Werror ft_putstr.c
** ft_memset.c ft_strcpy.c ft_putchar.c
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*a;

	a = (char *)b;
	while (len > 0)
	{
		a[len - 1] = c;
		len--;
	}
	return (b);
}
/*
**int		main(void)
**{
**	char	testone1[50];
**	char	testone2[50];
**	char	testtwo1[50];
**	char	testtwo2[50];
**	char	testthree1[50];
**	char	testthree2[50];
**	char	testfour1[50];
**	char	testfour2[50];
**	char	testfive1[50];
**	char	testfive2[50];
**	char	testsix1[50];
**	char	testsix2[50];
**	char	testseven1[50];
**	char	testseven2[50];
**	char	testeight1[50];
**	char	testeight2[50];
**	char	testnine1[50];
**	char	testnine2[50];
**	char	testten1[50];
**	char	testten2[50];
**
**	ft_strcpy(testone1, "copyme");
**	ft_strcpy(testone2, "copyme");
**	ft_putstr("\033[36mTest 1: input \"copyme\"\n\033[0m");
**	ft_putstr("\033[32mReplace \"c\" with \"X\"\n\033[0m");
**	memset(testone1, 'X', 1);
**	printf("%s\n", testone1);
**	ft_memset(testone2, 'X', 1);
**	printf("%s\n", testone2);
**	ft_strcpy(testtwo1, "biteme");
**	ft_strcpy(testtwo2, "biteme");
**	ft_putstr("\033[36mTest 1: input \"biteme\"\n\033[0m");
**	ft_putstr("\033[32mReplace \"bi\" with \"XX\"\n\033[0m");
**	memset(testtwo1, 'X', 2);
**	printf("%s\n", testtwo1);
**	ft_memset(testtwo2, 'X', 2);
**	printf("%s\n", testtwo2);
**	ft_strcpy(testthree1, "talktome");
**	ft_strcpy(testthree2, "talktome");
**	ft_putstr("\033[36mTest 1: input \"talktome\"\n\033[0m");
**	ft_putstr("\033[32mReplace \"tal\" with \"XXX\"\n\033[0m");
**	memset(testthree1, 'X', 3);
**	printf("%s\n", testthree1);
**	ft_memset(testthree2, 'X', 3);
**	printf("%s\n", testthree2);
**	ft_strcpy(testfour1, ".     .");
**	ft_strcpy(testfour2, ".     .");
**	ft_putstr("\033[36mTest 1: input \".     .\"\n\033[0m");
**	ft_putstr("\033[32mReplace \".   \" with \"XXXX\"\n\033[0m");
**	memset(testfour1, 'X', 4);
**	printf("%s\n", testfour1);
**	ft_memset(testfour2, 'X', 4);
**	printf("%s\n", testfour2);
**	ft_strcpy(testfive1, "!@#$%^&*()");
**	ft_strcpy(testfive2, "!@#$%^&*()");
**	ft_putstr("\033[36mTest 1: input \"!@#$%^&*()\"\n\033[0m");
**	ft_putstr("\033[32mReplace \"!@#$%\" with \"XXXXX\"\n\033[0m");
**	memset(testfive1, 'X', 5);
**	printf("%s\n", testfive1);
**	ft_memset(testfive2, 'X', 5);
**	printf("%s\n", testfive2);
**	ft_strcpy(testsix1, "0123456789");
**	ft_strcpy(testsix2, "0123456789");
**	ft_putstr("\033[36mTest 1: input \"0123456789\"\n\033[0m");
**	ft_putstr("\033[32mReplace \"012345\" with \"XXXXXX\"\n\033[0m");
**	memset(testsix1, 'X', 6);
**	printf("%s\n", testsix1);
**	ft_memset(testsix2, 'X', 6);
**	printf("%s\n", testsix2);
**	ft_strcpy(testseven1, "a a a a a a");
**	ft_strcpy(testseven2, "a a a a a a");
**	ft_putstr("\033[36mTest 1: input \"a a a a a a\"\n\033[0m");
**	ft_putstr("\033[32mReplace \"a a a a\" with \"XXXXXXX\"\n\033[0m");
**	memset(testseven1, 'X', 7);
**	printf("%s\n", testseven1);
**	ft_memset(testseven2, 'X', 7);
**	printf("%s\n", testseven2);
**	ft_strcpy(testeight1, "~~~~~~~~~~");
**	ft_strcpy(testeight2, "~~~~~~~~~~");
**	ft_putstr("\033[36mTest 1: input \"~~~~~~~~~~\"\n\033[0m");
**	ft_putstr("\033[32mReplace \"~~~~~~~~\" with \"XXXXXXXX\"\n\033[0m");
**	memset(testeight1, 'X', 8);
**	printf("%s\n", testeight1);
**	ft_memset(testeight2, 'X', 8);
**	printf("%s\n", testeight2);
**	ft_strcpy(testnine1, "//////////");
**	ft_strcpy(testnine2, "//////////");
**	ft_putstr("\033[36mTest 1: input \"//////////\"\n\033[0m");
**	ft_putstr("\033[32mReplace \"/////////\" with \"XXXXXXXXX\"\n\033[0m");
**	memset(testnine1, 'X', 9);
**	printf("%s\n", testnine1);
**	ft_memset(testnine2, 'X', 9);
**	printf("%s\n", testnine2);
**	ft_strcpy(testten1, "grade me!!");
**	ft_strcpy(testten2, "grade me!!");
**	ft_putstr("\033[36mTest 1: input \"grade me!!\"\n\033[0m");
**	ft_putstr("\033[32mReplace \"grade me!!\" with \"XXXXXXXXXX\"\n\033[0m");
**	memset(testten1, 'X', 10);
**	printf("%s\n", testten1);
**	ft_memset(testten2, 'X', 10);
**	printf("%s\n", testten2);
**}
*/
