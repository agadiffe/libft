/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 20:04:34 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 20:41:19 by agadiffe         ###   ########.fr       */
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
	size_t					i;
	const unsigned char		*str;

	i = 0;
	str = (const unsigned char*)s;
	while (i < n)
	{
		if ((unsigned char)c == str[i])
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
