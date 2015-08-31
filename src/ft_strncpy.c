/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 19:48:22 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/31 04:24:11 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
**		DESCRIPTION
**	The strncpy() functions copy at most n characters from src into dst.
**	If src is less than n characters long, the remainder of dst is filled
**	with `\0' characters.  Otherwise, dst is not terminated.
**	-------------------------------------------------------------------------
**	The source and destination strings should not overlap,
**	as the behavior is undefined.
**	-------------------------------------------------------------------------
**		RETURN VALUES
**	The strncpy() functions return dst.
*/

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*d;

	if (!n)
		return (dst);
	d = dst;
	while (n && *src)
	{
		*dst++ = *src++;
		n--;
	}
	while (n)
	{
		*dst++ = '\0';
		n--;
	}
	return (d);
}
