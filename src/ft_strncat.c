/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:49:23 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/31 04:25:53 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	The strncat() functions append a copy of the null-terminated string s2
**	to the end of the null-terminated string s1, then add a terminating `\0'.
**	The string s1 must have sufficient space to hold the result.
**	-------------------------------------------------------------------------
**	The strncat() function appends not more than n characters from s2,
**	and then adds a terminating `\0'.
**	-------------------------------------------------------------------------
**	The source and destination strings should not overlap, as the behavior
**	is undefined.
**	-------------------------------------------------------------------------
**		RETURN VALUES
**	The strncat() functions return the pointer s1.
*/

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*str1;

	if (!n)
		return (s1);
	str1 = s1;
	while (*str1)
		str1++;
	while (n && *s2)
	{
		*str1++ = *s2++;
		n--;
	}
	*str1 = '\0';
	return (s1);
}
