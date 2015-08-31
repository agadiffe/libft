/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 19:29:40 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/30 23:59:37 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	The memmove() function copies len bytes from string src to string dst.
**	The two strings may overlap; the copy is always done in a non-destructive
**	manner.
**		RETURN VALUES
**	The memmove() function returns the original value of dst.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;

	if (!len)
		return (dst);
	else if (!src && !dst)
		return (NULL);
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (s < d)
	{
		s = s + len - 1;
		d = d + len - 1;
		while (len)
		{
			*d-- = *s--;
			len--;
		}
	}
	else
		ft_memcpy(d, s, len);
	return (d);
}
