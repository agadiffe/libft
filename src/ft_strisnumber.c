/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisnumber.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/25 10:18:52 by agadiffe          #+#    #+#             */
/*   Updated: 2017/02/25 10:27:08 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	The strisnumber() function tests for a digit number string.  Regard-
**	less of locale, this includes the following characters only:
**	-------------------------------------------------------------------------
**	``0''         ``1''         ``2''         ``3''         ``4''
**	``5''         ``6''         ``7''         ``8''         ``9''
**	-------------------------------------------------------------------------
**		RETURN VALUES
**	The strisnumber() functions return zero if the character
**	tests false and return non-zero if the character tests true.
*/

int		ft_strisnumber(const char *s)
{
	if (*s == '-' && *(s + 1))
		s++;
	while (*s && ft_isdigit(*s))
		s++;
	return (*s ? 0 : 1);
}
