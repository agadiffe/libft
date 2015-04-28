/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:51:44 by agadiffe          #+#    #+#             */
/*   Updated: 2014/11/17 17:20:24 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		DESCRIPTION
**	The tolower() function converts an upper-case letter to the corresponding
**	lower-case letter.  The argument must be representable as an unsigned char
**	or the value of EOF.
**	-------------------------------------------------------------------------
**	Although the tolower() function uses the current locale, the tolower_l()
**	function may be passed a locale directly. See xlocale(3) for more
**	information.
**		RETURN VALUES
**	If the argument is an upper-case letter, the tolower() function returns
**	the corresponding lower-case letter if there is one; otherwise, the
**	argument is returned unchanged.
*/

int		ft_tolower(int c)
{
	if (ft_isupper(c))
		c = c + 32;
	return (c);
}
