/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 20:12:46 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/30 23:45:48 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
**		DESCRIPTION
**	The memcmp() function compares byte string s1 against byte string s2.
**	Both strings are assumed to be n bytes long.
**		RETURN VALUES
**	The memcmp() function returns zero if the two strings are identical,
**	otherwise returns the difference between the first two differing
**	bytes (treated as unsigned char values, so that `\200' is greater
**	than `\0', for example).  Zero-length strings are always identical.
*/

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (!s1 || !s2)
		return (s1 - s2);
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while (n)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
			n--;
		}
		else
			return (*str1 - *str2);
	}
	return (0);
}
