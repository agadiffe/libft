/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 20:04:34 by agadiffe          #+#    #+#             */
/*   Updated: 2016/01/09 16:04:31 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
**		DESCRIPTION
**	The memchr() function locates the first occurrence of c (converted to
**	an unsigned char) in string s.
**		RETURN VALUES
**	The memchr() function returns a pointer to the byte located, or NULL
**	if no such byte exists within n bytes.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*str;

	str = (const unsigned char *)s;
	while (n)
	{
		if ((unsigned char)c == *str)
			return ((void *)str);
		n--;
		str++;
	}
	return (NULL);
}
