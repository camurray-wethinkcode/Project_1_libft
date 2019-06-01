/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:06:43 by camurray          #+#    #+#             */
/*   Updated: 2019/05/28 11:45:03 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** replaces string with null bytes
** to test: uncomment main
** run gcc -Wall -Wextra -Werror ft_strlen.c ft_strcpy.c
** ft_bzero.c ft_putstr.c ft_putchar.c ft_memcmp.c
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;

	if (n != '0')
	{
		i = 0;
		while (i < n)
		{
			((char *)s)[i] = 0;
			i++;
		}
	}
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
**	int		len;
**
**	len = 0;
**	ft_strcpy(testone1, "copyme");
**	ft_strcpy(testone2, "copyme");
**	ft_putstr("\033[36mTest 1: input \"copyme\"\n\033[0m");
**	ft_putstr("\033[32mReplace entire string with null bytes\n\033[0m");
**	len = ft_strlen(testone1);
**	bzero(testone1, len);
**	printf("%s\n", testone1);
**	len = ft_strlen(testone2);
**	ft_bzero(testone2, len);
**	printf("%s\n", testone2);
**	ft_putstr("\033[35mMemcmp returns 0 if ft_bzero matches bzero\n\033[0m");
**	printf("%d\n", ft_memcmp(testone1, testone2, len));
**	ft_strcpy(testtwo1, "biteme");
**	ft_strcpy(testtwo2, "biteme");
**	ft_putstr("\033[36mTest 2: input \"biteme\"\n\033[0m");
**	ft_putstr("\033[32mReplace entire string with null bytes\n\033[0m");
**	len = ft_strlen(testtwo1);
**	bzero(testtwo1, len);
**	printf("%s\n", testtwo1);
**	len = ft_strlen(testtwo2);
**	ft_bzero(testtwo2, len);
**	printf("%s\n", testtwo2);
**	ft_putstr("\033[35mMemcmp returns 0 if ft_bzero matches bzero\n\033[0m");
**	printf("%d\n", ft_memcmp(testtwo1, testtwo2, len));
**	ft_strcpy(testthree1, "talktome");
**	ft_strcpy(testthree2, "talktome");
**	ft_putstr("\033[36mTest 3: input \"talktome\"\n\033[0m");
**	ft_putstr("\033[32mReplace entire string with null bytes\n\033[0m");
**	len = ft_strlen(testthree1);
**	bzero(testthree1, len);
**	printf("%s\n", testthree1);
**	len = ft_strlen(testthree2);
**	ft_bzero(testthree2, len);
**	printf("%s\n", testthree2);
**	ft_putstr("\033[35mMemcmp returns 0 if ft_bzero matches bzero\n\033[0m");
**	printf("%d\n", ft_memcmp(testthree1, testthree2, len));
**	ft_strcpy(testfour1, ".     .");
**	ft_strcpy(testfour2, ".     .");
**	ft_putstr("\033[36mTest 4: input \".     .\"\n\033[0m");
**	ft_putstr("\033[32mReplace entire string with null bytes\n\033[0m");
**	len = ft_strlen(testfour1);
**	bzero(testfour1, len);
**	printf("%s\n", testfour1);
**	len = ft_strlen(testfour2);
**	ft_bzero(testfour2, len);
**	printf("%s\n", testfour2);
**	ft_putstr("\033[35mMemcmp returns 0 if ft_bzero matches bzero\n\033[0m");
**	printf("%d\n", ft_memcmp(testfour1, testfour2, len));
**	ft_strcpy(testfive1, "!@#$%^&*()");
**	ft_strcpy(testfive2, "!@#$%^&*()");
**	ft_putstr("\033[36mTest 5: input \"!@#$%^&*()\"\n\033[0m");
**	ft_putstr("\033[32mReplace entire string with null bytes\n\033[0m");
**	len = ft_strlen(testfive1);
**	bzero(testfive1, len);
**	printf("%s\n", testfive1);
**	len = ft_strlen(testfive2);
**	ft_bzero(testfive2, len);
**	printf("%s\n", testfive2);
**	ft_putstr("\033[35mMemcmp returns 0 if ft_bzero matches bzero\n\033[0m");
**	printf("%d\n", ft_memcmp(testfive1, testfive2, len));
**	ft_strcpy(testsix1, "0123456789");
**	ft_strcpy(testsix2, "0123456789");
**	ft_putstr("\033[36mTest 6: input \"0123456789\"\n\033[0m");
**	ft_putstr("\033[32mReplace entire string with null bytes\n\033[0m");
**	len = ft_strlen(testsix1);
**	bzero(testsix1, len);
**	printf("%s\n", testsix1);
**	len = ft_strlen(testsix2);
**	ft_bzero(testsix2, len);
**	printf("%s\n", testsix2);
**	ft_putstr("\033[35mMemcmp returns 0 if ft_bzero matches bzero\n\033[0m");
**	printf("%d\n", ft_memcmp(testsix1, testsix2, len));
**	ft_strcpy(testseven1, "a a a a a a");
**	ft_strcpy(testseven2, "a a a a a a");
**	ft_putstr("\033[36mTest 7: input \"a a a a a a\"\n\033[0m");
**	ft_putstr("\033[32mReplace entire string with null bytes\n\033[0m");
**	len = ft_strlen(testseven1);
**	bzero(testseven1, len);
**	printf("%s\n", testseven1);
**	len = ft_strlen(testseven2);
**	ft_bzero(testseven2, len);
**	printf("%s\n", testseven2);
**	ft_putstr("\033[35mMemcmp returns 0 if ft_bzero matches bzero\n\033[0m");
**	printf("%d\n", ft_memcmp(testseven1, testseven2, len));
**	ft_strcpy(testeight1, "~~~~~");
**	ft_strcpy(testeight2, "~~~~~");
**	ft_putstr("\033[36mTest 8: input \"~~~~~\"\n\033[0m");
**	ft_putstr("\033[32mReplace entire string with null bytes\n\033[0m");
**	len = ft_strlen(testeight1);
**	bzero(testeight1, len);
**	printf("%s\n", testeight1);
**	len = ft_strlen(testeight2);
**	ft_bzero(testeight2, len);
**	printf("%s\n", testeight2);
**	ft_putstr("\033[35mMemcmp returns 0 if ft_bzero matches bzero\n\033[0m");
**	printf("%d\n", ft_memcmp(testeight1, testeight2, len));
**	ft_strcpy(testnine1, "/////");
**	ft_strcpy(testnine2, "/////");
**	ft_putstr("\033[36mTest 9: input \"/////\"\n\033[0m");
**	ft_putstr("\033[32mReplace entire string with null bytes\n\033[0m");
**	len = ft_strlen(testnine1);
**	bzero(testnine1, len);
**	printf("%s\n", testnine1);
**	len = ft_strlen(testnine2);
**	ft_bzero(testnine2, len);
**	printf("%s\n", testnine2);
**	ft_putstr("\033[35mMemcmp returns 0 if ft_bzero matches bzero\n\033[0m");
**	printf("%d\n", ft_memcmp(testnine1, testnine2, len));
**	ft_strcpy(testten1, "grademe");
**	ft_strcpy(testten2, "grademe");
**	ft_putstr("\033[36mTest 10: input \"grademe\"\n\033[0m");
**	ft_putstr("\033[32mReplace entire string with null bytes\n\033[0m");
**	len = ft_strlen(testten1);
**	bzero(testten1, len);
**	printf("%s\n", testten1);
**	len = ft_strlen(testten2);
**	ft_bzero(testten2, len);
**	printf("%s\n", testten2);
**	ft_putstr("\033[35mMemcmp returns 0 if ft_bzero matches bzero\n\033[0m");
**	printf("%d\n", ft_memcmp(testten1, testten2, len));
**}
*/
