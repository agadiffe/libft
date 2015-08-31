/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 22:35:08 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/31 03:27:33 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	The strstr() function locates the first occurrence of the null-terminated
**	string s2 in the null-terminated string s1.
**		RETURN VALUES
**	If s2 is an empty string, s1 is returned; if s2 occurs nowhere in s1,
**	NULL is returned; otherwise a pointer to the first character of the
**	first occurrence of s2 is returned.
*/

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	len;

	if (*s2 == '\0')
		return ((char *)s1);
	len = ft_strlen(s2);
	while (*s1)
	{
		if (!ft_strncmp(s1, s2, len))
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
