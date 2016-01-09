/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 18:53:35 by agadiffe          #+#    #+#             */
/*   Updated: 2016/01/09 17:27:56 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
**		DESCRIPTION
**	The memccpy() function copies bytes from string src to string dst.
**	If the character c (as converted to an unsigned char) occurs in the
**	string src, the copy stops and a pointer to the byte after the copy
**	of c in the string dst is returned.
**	Otherwise, n bytes are copied, and a NULL pointer is returned.
**	-------------------------------------------------------------------------
**	The source and destination strings should not overlap,
**	as the behavior is undefined.
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	if (!n && c)
		return (dst);
	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	while (n)
	{
		if ((*s1++ = *s2++) == (unsigned char)c)
			return (s1);
		n--;
	}
	return (NULL);
}
