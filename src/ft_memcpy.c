/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 18:19:17 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 20:42:35 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
**		DESCRIPTION
**	The memcpy() function copies n bytes from memory area src to memory
**	area dst.  If dst and src overlap, behavior is undefined.
**	Applications in which dst and src might overlap should use memmove(3)
**	instead.
**		RETURN VALUES
**	The memcpy() function returns the original value of dst.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	if (!n || (!dst && !src))
		return (dst);
	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return ((void *)s1);
}
