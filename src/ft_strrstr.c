/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 20:53:26 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/31 03:35:42 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	The strrstr() function locates the last occurrence of the null-terminated
**	string s2 in the null-terminated string s1.
**		RETURN VALUES
**	If s2 is an empty string, s1 is returned; if s2 occurs nowhere in s1,
**	NULL is returned; otherwise a pointer to the first character of the
**	last occurrence of s2 is returned.
*/

char	*ft_strrstr(const char *s1, const char *s2)
{
	char	*str;

	if (*s2 == '\0')
		return ((char *)s1);
	str = s1 + ft_strlen(s1) - 1;
	while (str != s1)
	{
		if (ft_strstr((char *)str, s2))
			return ((char *)str);
		str--;
	}
	if (ft_strstr((char *)str, s2))
		return ((char *)str);
	return (NULL);
}
