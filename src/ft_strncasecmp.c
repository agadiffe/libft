/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncasecmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 21:47:26 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/31 02:26:21 by agadiffe         ###   ########.fr       */
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

static void		ft_str_tolower(char *str)
{
	while (*str)
		*str = ft_tolower(*str++);
}

int		ft_strncasecmp(const char *s1, const char *s2, size_t n)
{
	char	*str1;
	char	*str2;
	char	*tmp1;
	char	*tmp2;
	int		ret;

	str1 = ft_strdup(s1);
	str2 = ft_strdup(s2);
	ft_str_tolower(str1);
	ft_str_tolower(str2);
	tmp1 = str1;
	tmp2 = str2;
	while (n && *str1 && *str1 == *str2)
	{
		str1++;
		str2++;
		n--;
	}
	ret = (unsigned char)*str1 - (unsigned char)*str2;
	ft_strdel(&tmp1);
	ft_strdel(&tmp2);
	if (n == 0)
		return (0);
	return (ret);
}
