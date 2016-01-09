/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:30:48 by agadiffe          #+#    #+#             */
/*   Updated: 2016/01/09 18:40:29 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	The strlcpy() and strlcat() functions copy and concatenate strings
**	respectively.  They are designed to be safer, more consistent, and less
**	error prone replacements for strncpy(3) and strncat(3).  Unlike those
**	functions, strlcpy() and strlcat() take the full size of the buffer (not
**	just the length) and guarantee to NUL-terminate the result (as long as
**	size is larger than 0 or, in the case of strlcat(), as long as there is
**	at least one byte free in dst).  Note that a byte for the NUL should be
**	included in size.  Also note that strlcpy() and strlcat() only operate on
**	true ``C'' strings.  This means that for strlcpy() src must be NUL-termi-
**	nated and for strlcat() both src and dst must be NUL-terminated.
**	-------------------------------------------------------------------------
**	The strlcpy() function copies up to size - 1 characters from the NUL-ter-
**	minated string src to dst, NUL-terminating the result.
**	-------------------------------------------------------------------------
**	The strlcat() function appends the NUL-terminated string src to the end
**	of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi-
**	nating the result.
**	-------------------------------------------------------------------------
**	The source and destination strings should not overlap, as the behavior is
**	undefined.
**	-------------------------------------------------------------------------
**		RETURN VALUES
**	The strlcpy() and strlcat() functions return the total length of the
**	string they tried to create.  For strlcpy() that means the length of src.
**	For strlcat() that means the initial length of dst plus the length of
**	src.  While this may seem somewhat confusing, it was done to make trunca-
**	tion detection simple.
**	-------------------------------------------------------------------------
**	Note however, that if strlcat() traverses size characters without finding
**	a NUL, the length of the string is considered to be size and the destina-
**	tion string will not be NUL-terminated (since there was no space for the
**	NUL).  This keeps strlcat() from running off the end of a string.  In
**	practice this should not happen (as it means that either size is incor-
**	rect or that dst is not a proper ``C'' string).  The check exists to pre-
**	vent potential security problems in incorrect code.
*/

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*d;
	char	*s;
	size_t	len;
	size_t	dst_len;

	if (!(d = (char *)ft_memchr(dst, '\0', size)))
		return (size + ft_strlen(src));
	s = (char *)src;
	d = (char *)dst;
	dst_len = ft_strlen(dst);
	len = dst_len + ft_strlen(s);
	d += dst_len;
	while (dst_len++ < size - 1 && *s)
		*d++ = *s++;
	*d = '\0';
	return (len);
}
