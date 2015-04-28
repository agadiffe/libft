/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:11:15 by agadiffe          #+#    #+#             */
/*   Updated: 2014/11/19 21:40:08 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	The toupper() function converts a lower-case letter to the corresponding
**	upper-case letter.  The argument must be representable as an unsigned char
**	or the value of EOF.
**	-------------------------------------------------------------------------
**	Although the toupper() function uses the current locale, the
**	toupper_l() function may be passed a locale directly. See xlocale(3)
**	for more information.
**		RETURN VALUES
**	If the argument is a lower-case letter, the toupper() function
**	returns the corresponding upper-case letter if there is one; otherwise,
**	the argument is returned unchanged.
*/

int	ft_toupper(int c)
{
	if (ft_islower(c))
		c = c - 32;
	return (c);
}
