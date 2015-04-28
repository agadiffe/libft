/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 19:48:22 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 21:24:47 by agadiffe         ###   ########.fr       */
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
	size_t	i;

	i = 0;
	if (!n)
		return (dst);
	while (i < n && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
