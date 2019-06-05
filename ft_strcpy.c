/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:17:48 by camurray          #+#    #+#             */
/*   Updated: 2019/06/05 17:08:36 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the strcpy function.
** This function copies the src string into the dst string.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_strcpy.c ft_putstr.c ft_strlen.c
*/

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
**int		main(void)
**{
**	char	*test1 = "copyme";
**	char	*test2 = "biteme";
**	char	*test3 = "talktome";
**	char	*test4 = ".     .";
**	char	*test5 = "!@#$%^&*()";
**	char	*test6 = "0123456789";
**	char	*test7 = "a a a a a a";
**	char	*test8 = "~~~~~";
**	char	*test9 = "/////";
**	char	*test10 = "grademe";
**	char	printstring[265] = "printoverme";
**
**	ft_putstr("\033[36mTest 1: input \"copyme\"\n\033[0m");
**	strcpy(printstring, test1);
**	printf("%s\n", printstring);
**	ft_strcpy(printstring, test1);
**	printf("%s\n", printstring);
**	ft_putstr("\033[36mTest 2: input \"biteme\"\n\033[0m");
**	strcpy(printstring, test2);
**	printf("%s\n", printstring);
**	ft_strcpy(printstring, test2);
**	printf("%s\n", printstring);
**	ft_putstr("\033[36mTest 3: input \"talktome\"\n\033[0m");
**	strcpy(printstring, test3);
**	printf("%s\n", printstring);
**	ft_strcpy(printstring, test3);
**	printf("%s\n", printstring);
**	ft_putstr("\033[36mTest 4: input \".     .\"\n\033[0m");
**	strcpy(printstring, test4);
**	printf("%s\n", printstring);
**	ft_strcpy(printstring, test4);
**	printf("%s\n", printstring);
**	ft_putstr("\033[36mTest 5: input \"!@#$%^&*()\"\n\033[0m");
**	strcpy(printstring, test5);
**	printf("%s\n", printstring);
**	ft_strcpy(printstring, test5);
**	printf("%s\n", printstring);
**	ft_putstr("\033[36mTest 6: input \"1234567890\"\n\033[0m");
**	strcpy(printstring, test6);
**	printf("%s\n", printstring);
**	ft_strcpy(printstring, test6);
**	printf("%s\n", printstring);
**	ft_putstr("\033[36mTest 7: input \"a a a a a a\"\n\033[0m");
**	strcpy(printstring, test7);
**	printf("%s\n", printstring);
**	ft_strcpy(printstring, test7);
**	printf("%s\n", printstring);
**	ft_putstr("\033[36mTest 8: input \"~~~~~\"\n\033[0m");
**	strcpy(printstring, test8);
**	printf("%s\n", printstring);
**	ft_strcpy(printstring, test8);
**	printf("%s\n", printstring);
**	ft_putstr("\033[36mTest 9: input \"/////\"\n\033[0m");
**	strcpy(printstring, test9);
**	printf("%s\n", printstring);
**	ft_strcpy(printstring, test9);
**	printf("%s\n", printstring);
**	ft_putstr("\033[36mTest 10: input \"grademe\"\n\033[0m");
**	strcpy(printstring, test10);
**	printf("%s\n", printstring);
**	ft_strcpy(printstring, test10);
**	printf("%s\n", printstring);
**}
*/
