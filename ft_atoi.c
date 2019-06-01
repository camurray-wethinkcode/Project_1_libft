/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 15:17:48 by camurray          #+#    #+#             */
/*   Updated: 2019/06/01 16:00:37 by camurray         ###   ########.fr       */
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

int			ft_atoi(const char *nptr)
{
	unsigned long long	ret;
	int					len;
	int					i;
	int					sign;

	sign = 1;
	i = -1;
	len = 0;
	ret = 0;
	while (ft_isspace(*nptr))
		nptr++;
	while (nptr[len])
		len++;
	while (++i <= len)
	{
		if (ft_isdigit(nptr[i]))
			ret = (ret * 10) + (nptr[i] - '0');
		else if (i == 0 && (nptr[i] == '-' || nptr[i] == '+'))
			sign = nptr[i] == '-' ? -1 : 1;
		else
			return (overflow(ret, sign, nptr));
	}
	return (overflow(ret, sign, nptr));
}
