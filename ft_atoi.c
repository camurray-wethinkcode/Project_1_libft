/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 15:17:48 by camurray          #+#    #+#             */
/*   Updated: 2019/06/04 14:43:39 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recreation of the atoi function.
** Input is a pointer to the first character of a string of characters
** to be converted from an ascii number to an integer number.
** Used unsigned long long as a datatype in the function instead of any other
** to account for overflow as this datatype holds larger digits than an int.
** Called function isspace from library to skip over whitespaces.
** Convert from char to int by multiplying by 10 and subtracting '0'.
** The second function is named static so it can only be seen by ft_atoi
** and not be used as part of the library.
** The number 92233720...is the value of a 64 bit int.
** This is the largest value my atoi can process.
** The counter i starts at -1 because I pre increment in one loop
** as I need it to run atleast once when compared to len of string.
** Logic:
** 1) we receive a pointer to a string of characters
** 2) we check for whitespaces and skip over whitespaces
** 3) we get the length of the string and save it as variable len
** 4) we limit our loop to run to end of line by using counter i
** 5) and in that loop we check if the character is a digit
**    and if yes we convert to an int by * 10 - '0'
** 6) otherwise we check if we're on a sign character (+ or -)
**    by using i = 0 (first char in string) and if yes we assign
**    the corresponding value to variable sign for later use
** 7) otherwise we pass the input to the second function as our function
**    length is limited to 25 lines per norminette
** 8) in the second function we check if the current character
**    is less than 1 or more than 9 on ascii, and if yes we increment past
** 9) then we check if digit for p plus variable i to assign the len value to i
**    as we are in a new function now and lost the previous value
** 10) and if the len is more or equal to 19 we account for overflow
**     by recursively calling the function and we check the sign and note it
**     19 becuase the max 64 bit len is 19 chars long
** 11) then we multiply the sign and the number which returns to ft_atoi
** This is not the most seamless way of performing this function, but it works.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror ft_atoi.c ft_putchar.c
** ft_putstr.c ft_iswhitespace.c ft_strlen.c ft_isdigit.c
*/

static int	overflow(unsigned long long overflow, int sign, const char *p)
{
	int	i;

	i = 0;
	while (*p <= '1' || *p >= '9')
		p++;
	while (ft_isdigit(*(p + i)))
		i++;
	if (i >= 19)
		return (sign == -1 ? 0 : -1);
	if (overflow > 9223372036854775807)
		return (sign == -1 ? 0 : -1);
	else
		return (overflow * sign);
}

int			ft_atoi(const char *str)
{
	unsigned long long	ret;
	int					len;
	int					i;
	int					sign;

	sign = 1;
	i = -1;
	len = 0;
	ret = 0;
	while (ft_iswhitespace(*str))
		str++;
	while (str[len])
		len++;
	while (++i <= len)
	{
		if (ft_isdigit(str[i]))
			ret = (ret * 10) + (str[i] - '0');
		else if (i == 0 && (str[i] == '-' || str[i] == '+'))
			sign = str[i] == '-' ? -1 : 1;
		else
			return (overflow(ret, sign, str));
	}
	return (overflow(ret, sign, str));
}
/*
**int		main(void)
**{
**	ft_putstr("\033[36mTest 1: input \" -sfecf\"\n\033[0m");
**	printf("%d\n", atoi(" -sfecf"));
**	printf("%d\n", ft_atoi(" -sfecf"));
**	ft_putstr("\033[36mTest 2: input \"\"\n\033[0m");
**	printf("%d\n", atoi(""));
**	printf("%d\n", ft_atoi(""));
**	ft_putstr("\033[36mTest 3: input \"+0\"\n\033[0m");
**	printf("%d\n", atoi("+0"));
**	printf("%d\n", ft_atoi("+0"));
**	ft_putstr("\033[36mTest 4: input \"-0\"\n\033[0m");
**	printf("%d\n", atoi("-0"));
**	printf("%d\n", ft_atoi("-0"));
**	ft_putstr("\033[36mTest 5: input \"0\"\n\033[0m");
**	printf("%d\n", atoi("0"));
**	printf("%d\n", ft_atoi("0"));
**	ft_putstr("\033[36mTest 6: input \"     --s8\"\n\033[0m");
**	printf("%d\n", atoi("     --s8"));
**	printf("%d\n", ft_atoi("     --s8"));
**	ft_putstr("\033[36mTest 7: input \"0001020304\"\n\033[0m");
**	printf("%d\n", atoi("0001020304"));
**	printf("%d\n", ft_atoi("0001020304"));
**	ft_putstr("\033[36mTest 8: input \"-2147483648\"\n\033[0m");
**	printf("%d\n", atoi("-2147483648"));
**	printf("%d\n", ft_atoi("-2147483648"));
**	ft_putstr("\033[36mTest 9: input \"-153\"\n\033[0m");
**	printf("%d\n", atoi("-153"));
**	printf("%d\n", ft_atoi("-153"));
**	ft_putstr("\033[36mTest 10: input \"+132\"\n\033[0m");
**	printf("%d\n", atoi("+132"));
**	printf("%d\n", ft_atoi("+132"));
**	ft_putstr("\033[36mTest 11: input \"++876\"\n\033[0m");
**	printf("%d\n", atoi("++876"));
**	printf("%d\n", ft_atoi("++876"));
**	ft_putstr("\033[36mTest 12: input \"--132\"\n\033[0m");
**	printf("%d\n", atoi("--132"));
**	printf("%d\n", ft_atoi("--132"));
**	ft_putstr("\033[36mTest 13: input \"dwbk\"\n\033[0m");
**	printf("%d\n", atoi("dwbk"));
**	printf("%d\n", ft_atoi("dwbk"));
**	ft_putstr("\033[36mTest 14: input \" 1\"\n\033[0m");
**	printf("%d\n", atoi(" 1"));
**	printf("%d\n", ft_atoi(" 1"));
**	ft_putstr("\033[36mTest 15: input \"42jk \"\n\033[0m");
**	printf("%d\n", atoi("45jk "));
**	printf("%d\n", ft_atoi("45jk "));
**	ft_putstr("\033[36mTest 16: input \" 21\"\n\033[0m");
**	printf("%d\n", atoi(" 21"));
**	printf("%d\n", ft_atoi(" 21"));
**	ft_putstr("\033[36mTest 17: input \"     32 \"\n\033[0m");
**	printf("%d\n", atoi("     32 "));
**	printf("%d\n", ft_atoi("     32 "));
**	ft_putstr("\033[36mTest 18: input \"\\n          42 24\"\n\033[0m");
**	printf("%d\n", atoi("\n          42 24"));
**	printf("%d\n", ft_atoi("\n          42 24"));
**	ft_putstr("\033[36mTest 19: input \"1-2\"\n\033[0m");
**	printf("%d\n", atoi("1-2"));
**	printf("%d\n", ft_atoi("1-2"));
**	ft_putstr("\033[36mTest 20: input \"4+2\"\n\033[0m");
**	printf("%d\n", atoi("4+2"));
**	printf("%d\n", ft_atoi("4+2"));
**	ft_putstr("\033[36mTest 21: input \"  +442\"\n\033[0m");
**	printf("%d\n", atoi("  +442"));
**	printf("%d\n", ft_atoi("  +442"));
**	ft_putstr("\033[36mTest 22: input \"  -4232\"\n\033[0m");
**	printf("%d\n", atoi("  -4232"));
**	printf("%d\n", ft_atoi("  -4232"));
**	ft_putstr("\033[36mTest 23: input \"4,5\"\n\033[0m");
**	printf("%d\n", atoi("4,5"));
**	printf("%d\n", ft_atoi("4,5"));
**	ft_putstr("\033[36mTest 24: input \"+\"\n\033[0m");
**	printf("%d\n", atoi("+"));
**	printf("%d\n", ft_atoi("+"));
**	ft_putstr("\033[36mTest 25: input \"-\"\n\033[0m");
**	printf("%d\n", atoi("-"));
**	printf("%d\n", ft_atoi("-"));
**	ft_putstr("\033[36mTest 26: input \"+-1\"\n\033[0m");
**	printf("%d\n", atoi("+-1"));
**	printf("%d\n", ft_atoi("+-1"));
**	ft_putstr("\033[36mTest 27: input \"-+1\"\n\033[0m");
**	printf("%d\n", atoi("-+1"));
**	printf("%d\n", ft_atoi("-+1"));
**	ft_putstr("\033[36mTest 28: input \"\\200123\"\n\033[0m");
**	printf("%d\n", atoi("\200123"));
**	printf("%d\n", ft_atoi("\200123"));
**	ft_putstr("\033[36mTest 29: input \"123\\200\"\n\033[0m");
**	printf("%d\n", atoi("123\200"));
**	printf("%d\n", ft_atoi("123\200"));
**	ft_putstr("\033[36mTest 30: input \"  \\t\\n  \\r\\r\\v\\f-899\"\n\033[0m");
**	printf("%d\n", atoi("  \t\n  \r\r\v\f-899"));
**	printf("%d\n", ft_atoi("  \t\n  \r\r\v\f-899"));
**	ft_putstr("\033[36mTest 31: input \"-2147483648\"\n\033[0m");
**	printf("%d\n", atoi("-2147483648"));
**	printf("%d\n", ft_atoi("-2147483648"));
**	ft_putstr("\033[36mTest 32: input \"2147483647\"\n\033[0m");
**	printf("%d\n", atoi("2147483647"));
**	printf("%d\n", ft_atoi("2147483647"));
**	ft_putstr("\033[36mTest 33: input \"000000000000000100\"\n\033[0m");
**	printf("%d\n", atoi("000000000000000100"));
**	printf("%d\n", ft_atoi("000000000000000100"));
**	ft_putstr("\033[36mTest 34: input \"0000000000-10-\"\n\033[0m");
**	printf("%d\n", atoi("0000000000-10-"));
**	printf("%d\n", ft_atoi("0000000000-10-"));
**	ft_putstr("\033[36mTest 35: input \"-123A There is a Cat in my pants
**  \"\n\033[0m");
**	printf("%d\n", atoi("-123A There is a Cat in my pants"));
**	printf("%d\n", ft_atoi("-123A There is a Cat in my pants"));
**	ft_putstr("\033[36mTest 36: input \"0129\\0012334\\
**  0Hidden\\n123\"\n\033[0m");
**	printf("%d\n", atoi("0129\0012334\0Hidden\n123"));
**	printf("%d\n", ft_atoi("0129\0012334\0Hidden\n123"));
**	ft_putstr("\033[36mTest 37: input \"123456789012345678999\"\n\033[0m");
**	printf("%d\n", atoi("123456789012345678999"));
**	printf("%d\n", ft_atoi("123456789012345678999"));
**	ft_putstr("\033[36mTest 38: input \"123456789012345678\"\n\033[0m");
**	printf("%d\n", atoi("123456789012345678"));
**	printf("%d\n", ft_atoi("123456789012345678"));
**	ft_putstr("\033[36mTest 39: input \"-123456789012345675\"\n\033[0m");
**	printf("%d\n", atoi("-123456789012345675"));
**	printf("%d\n", ft_atoi("-123456789012345675"));
**	ft_putstr("\033[36mTest 40: input \"      +000000000031\"\n\033[0m");
**	printf("%d\n", atoi("      +000000000031"));
**	printf("%d\n", ft_atoi("      +000000000031"));
**}
*/
