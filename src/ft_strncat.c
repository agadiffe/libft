/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:49:23 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 21:23:54 by agadiffe         ###   ########.fr       */
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
	size_t	i;
	size_t	j;

	if (!n)
		return (s1);
	i = ft_strlen(s1);
	j = 0;
	while (n > 0 && s2[j])
	{
		s1[i++] = s2[j++];
		n--;
	}
	s1[i] = '\0';
	return (s1);
}
