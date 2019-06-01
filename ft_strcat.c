/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:17:03 by camurray          #+#    #+#             */
/*   Updated: 2019/05/28 12:11:18 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** concatenates s1 to the end of s2
** to test: uncomment main
** run gcc -Wall -Wextra -Werror ft_strcat.c ft_putstr.c ft_putchar.c
*/

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (s1[i] != '\0')
		++i;
	j = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[j];
		i++;
		++j;
	}
	s1[i] = '\0';
	return (s1);
}
/*
**int		main(void)
**{
**	char	testone1[256] = "hello";
**	char	testone2[256] = " there";
**	char	testtwo1[256] = "Bon";
**	char	testtwo2[256] = " beep beep";
**	char	testthree1[256] = "j";
**	char	testthree2[256] = "asdasd  ";
**	char	testfour1[256] = "our.";
**	char	testfour2[256] = "com  da";
**
**	ft_putstr("\033[36mTest 1: input \"hello\" & \" there\"\n\033[0m");
**	printf("%s\n", strcat(testone1, testone2));
**	printf("%s\n", ft_strcat(testone1, testone2));
**	ft_putstr("\033[36mTest 2: input \"Bon\" & \" beep beep\"\n\033[0m");
**	printf("%s\n", strcat(testtwo1, testtwo2));
**	printf("%s\n", ft_strcat(testtwo1, testtwo2));
**	ft_putstr("\033[36mTest 3: input \"j\" & \"asdasd  \"\n\033[0m");
**	printf("%s\n", strcat(testthree1, testthree2));
**	printf("%s\n", ft_strcat(testthree1, testthree2));
**	ft_putstr("\033[36mTest 4: input \"our. & \"com  da\"\"\n\033[0m");
**	printf("%s\n", strcat(testfour1, testfour2));
**	printf("%s\n", ft_strcat(testfour1, testfour2));
**}
*/
