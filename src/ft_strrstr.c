/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 20:53:26 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/05 23:05:10 by agadiffe         ###   ########.fr       */
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
	size_t	i;

	i = ft_strlen(s1) - 1;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (i > 0)
	{
		if (ft_strstr(s2, (char *)&s1[i]))
			return ((char *)&s1[i]);
		i--;
	}
	return (NULL);
}
