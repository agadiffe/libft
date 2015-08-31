/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:13:11 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/31 02:40:06 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
**		DESCRIPTION
**	The strlen() function computes the length of the string s.
**		RETURN VALUES
**	The strlen() function returns the number of characters that precede
**	the terminating NUL character.
*/

size_t	ft_strlen(const char *s)
{
	const char	*origin_str;

	origin_str = s;
	while (*s)
		s++;
	return (s - origin_str);
}
