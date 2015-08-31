/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 21:35:23 by agadiffe          #+#    #+#             */
/*   Updated: 2015/08/31 04:22:07 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static void		ft_str_tolower(char *str)
{
	while (*str)
	{
		*str = ft_tolower(*str);
		str++;
	}
}

int				ft_strcasecmp(const char *s1, const char *s2)
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
	while (*str1 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	ret = (unsigned char)*str1 - (unsigned char)*str2;
	ft_strdel(&tmp1);
	ft_strdel(&tmp2);
	return (ret);
}
