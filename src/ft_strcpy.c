/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:31:44 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 21:13:06 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
**		DESCRIPTION
**	The strcpy() functions copy the string src to dst
**	(including the terminating `\0' character).
**	-------------------------------------------------------------------------
**	The source and destination strings should not overlap,
**	as the behavior is undefined.
**	-------------------------------------------------------------------------
**		RETURN VALUES
**	The strcpy() functions return dst.
*/

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
