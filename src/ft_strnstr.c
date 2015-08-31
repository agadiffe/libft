/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 23:46:42 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/31 03:07:11 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	The strnstr() function locates the first occurrence of the null-terminated
**	string s2 in the string s1, where not more than n characters are searched.
**	Characters that appear after a `\0' character are not searched.
**	Since the strnstr() function is a FreeBSD specific API, it should only
**	be used when portability is not a concern.
**		RETURN VALUES
**	If s2 is an empty string, s1 is returned; if s2 occurs nowhere in s1,
**	NULL is returned; otherwise a pointer to the first character of the
**	first occurrence of s2 is returned.
*/

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	if (*s2 == '\0')
		return ((char *)s1);
	len = ft_strlen(s2);
	while (*s1 && len <= n--)
	{
		if (!ft_strncmp(s1, s2, len))
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
