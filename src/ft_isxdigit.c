/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:58:50 by agadiffe          #+#    #+#             */
/*   Updated: 2014/11/18 20:12:44 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	The isxdigit() function tests for any hexadecimal-digit character.
**	Regardless of locale, this includes the following characters only:
**	-------------------------------------------------------------------------
**	``0''         ``1''         ``2''         ``3''         ``4''
**	``5''         ``6''         ``7''         ``8''         ``9''
**	``A''         ``B''         ``C''         ``D''         ``E''
**	``F''         ``a''         ``b''         ``c''         ``d''
**	``e''         ``f''
**	-------------------------------------------------------------------------
**	The ishexnumber() function behaves similarly to isxdigit(), but may
**	recognize additional characters, depending on the current locale setting.
**	-------------------------------------------------------------------------
**	The value of the argument must be representable as an unsigned char or
**	the value of EOF.
**		RETURN VALUES
**	The isxdigit() function returns zero if the character tests false and
**	returns non-zero if the character tests true.
*/

int	ft_isxdigit(int c)
{
	return ((ft_isdigit(c)) || (64 < c && c < 71) || (96 < c && c < 103));
}
