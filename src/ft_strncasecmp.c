/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncasecmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 21:47:26 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/01 21:23:11 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	The strncasecmp() functions compare the null-terminated strings s1 and s2,
**	ignoring case.
**	-------------------------------------------------------------------------
**	The strncasecmp() compare at most n characters.
***	-------------------------------------------------------------------------
**	Although the strcasecmp() functions use the current locale,
**	the strcasecmp_l() functions may be passed locales directly.
**	See xlocale(3) for more information.
**		RETURN VALUES
**	The strncasecmp() return an integer greater than, equal to, or less than 0,
**	according as s1 is lexicographically greater than, equal to, or less than
**	s2 after translation of each corresponding character to lower-case.
**	The strings themselves are not modified.  The comparison is done using
**	unsigned characters, so that `\200' is greater than `\0'.
*/

int		ft_strncasecmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	if (!n)
		return ((unsigned char)0);
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (str1[i])
		ft_tolower(str1[i++]);
	i = 0;
	while (str2[i])
		ft_tolower(str2[i++]);
	i = 0;
	while (str1[i] != '\0' && str1[i] == str2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
