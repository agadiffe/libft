/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/02 13:33:42 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/02 13:46:05 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
**		DESCRIPTION
**	The strnlen() function attempts to compute the length of s, but never
**	scans beyond the first maxlen bytes of s.
**		RETURN VALUES
**	The strlen() function returns the number of characters that precede the
**	terminating NUL character.  The strnlen() function returns either the
**	same result as strlen() or maxlen, whichever is smaller.
*/

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t		i;

	i = 0;
	while (maxlen-- && s[i])
		i++;
	return (i);
}
