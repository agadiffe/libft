/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnisnumber.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 16:26:52 by agadiffe          #+#    #+#             */
/*   Updated: 2017/03/02 16:36:08 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	The strisnumber() function tests for a whole number string.  Regard-
**	less of locale, this includes the following characters only:
**	-------------------------------------------------------------------------
**	``0''         ``1''         ``2''         ``3''         ``4''
**	``5''         ``6''         ``7''         ``8''         ``9''
**	-------------------------------------------------------------------------
**	The ft_strnisnumber() function compares not more than n characters.
**		RETURN VALUES
**	The strnisnumber() functions return zero if the character
**	tests false and return non-zero if the character tests true.
*/

int		ft_strnisnumber(const char *s, size_t n)
{
	if ((*s == '-' || *s == '+') && *(s + 1))
		s++;
	while (*s && n && ft_isdigit(*s))
	{
		s++;
		n--;
	}
	return (!n || !*s ? 1 : 0);
}
