/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 17:45:48 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/31 03:39:53 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	The strstrchr() function locates the first occurrence of one of the
**	character of str (converted to a char) in the string pointed to by s.
**	The terminating null character is considered to be part of the string;
**	therefore if str is empty, the functions locate the terminating `\0'.
**		RETURN VALUES
**	The functions strstrchr() return a pointer to the first located character,
**	or NULL if any of the character does not appear in the string.
*/

char	*ft_strstrchr(const char *s, const char *str)
{
	while (*s)
	{
		if (ft_strchr(str, *s))
			return ((char *)s);
		s++;
	}
	if (*str == '\0')
		return ((char *)s);
	return (NULL);
}
