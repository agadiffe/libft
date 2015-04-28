/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 21:35:23 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 21:10:08 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
**		DESCRIPTION
**	The strcasecmp() functions compare the null-terminated strings s1 and s2,
**	ignoring case.
**	-------------------------------------------------------------------------
**	Although the strcasecmp() functions use the current locale,
**	the strcasecmp_l() functions may be passed locales directly.
**	See xlocale(3) for more information.
**		RETURN VALUES
**	The strcasecmp() return an integer greater than, equal to, or less than 0,
**	according as s1 is lexicographically greater than, equal to, or less than
**	s2 after translation of each corresponding character to lower-case.
**	The strings themselves are not modified.  The comparison is done using
**	unsigned characters, so that `\200' is greater than `\0'.
*/

int		ft_strcasecmp(const char *s1, const char *s2)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (str1[i])
		ft_tolower(str1[i++]);
	i = 0;
	while (str2[i])
		ft_tolower(str2[i++]);
	i = 0;
	while (str1[i] == str2[i])
	{
		if (str1[i] == '\0')
			return (0);
		i++;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
